import LeanRV64D.InstsEnd

open Sail
open LeanRV64D
open LeanRV64D.Defs
open LeanRV64D.Functions

-- Check if definitions from generated Lean exist
#check @execute_MIN3
#check @rX_bits
#check @wX_bits


-- Define lean version of min3

theorem zopz0zI_s_eq_slt (a b : BitVec 64) :
    zopz0zI_s a b = BitVec.slt a b := by
  unfold zopz0zI_s BitVec.slt
  rfl

def spec_min_s (a b : BitVec 64) : BitVec 64 :=
-- slt = signed less than, returns 1 if a < b, else 0
  if BitVec.slt a b then a else b

-- spec of min3 using SailM monad
def spec_min3_impl (rs1 rs2 rd : regidx) : SailM Unit := do
  let a ← rX_bits rs1
  let b ← rX_bits rs2
  wX_bits rd (spec_min_s a b)

-- spec_min3_impl is equivalent to execute_MIN3 (start-state to end-state)
theorem execute_MIN3_effect (rs1 rs2 rd : regidx) :
    (execute_MIN3 rs2 rs1 rd >>= fun _ => pure ())
      = spec_min3_impl rs1 rs2 rd := by

  unfold execute_MIN3 spec_min3_impl spec_min_s

  simp only [zopz0zI_s_eq_slt]

  -- simp [simp_sail, bind_pure_comp]
  simp [map_bind, bind_pure_comp]

-- the if from execute MIN3 is equivalent to the spec_min_s function
theorem min3_core (a b : BitVec 64) :
    (if zopz0zI_s a b then a else b) = spec_min_s a b := by
  unfold spec_min_s
  rw [zopz0zI_s_eq_slt]

-- ---------------------------------------------------------------------------
-- Register read/write plumbing.
--
-- `(do wX_bits rd v; rX_bits rd) = pure v` is NOT a valid SailM equation:
-- `pure v` leaves the state untouched, but `wX_bits` really does mutate
-- `regs`, so the two sides land in different final states. The honest
-- read-after-write statement has to keep the write's effect on both sides
-- (`rX_wX_same` below). The helper lemmas establish the pieces needed to
-- get there: a generic single-register roundtrip on the Sail runtime monad,
-- and the fact that `wX`'s post-write callback (`xreg_write_callback`) never
-- touches `regs` (its only "effect" is building a debug name string).
-- ---------------------------------------------------------------------------

-- generic read-after-write for a single Sail register
theorem readReg_writeReg_same (r : Register) (v : RegisterType r) :
    (do writeReg r v; readReg r) = (do writeReg r v; pure v : SailM (RegisterType r)) := by
  unfold writeReg readReg PreSail.readReg PreSail.writeReg
  funext s
  simp [bind, EStateM.bind, modify, modifyGet, MonadStateOf.modifyGet, EStateM.modifyGet,
        get, getThe, MonadStateOf.get, EStateM.get,
        Std.ExtDHashMap.get?_insert_self]

theorem wX_rX_register_same (r : Register) (v : RegisterType r) :
    (do writeReg r v; readReg r) = (fun _ => v) <$> writeReg r v := by
  rw [readReg_writeReg_same]
  simp only [map_eq_pure_bind]

-- `reg_name_forwards` always decodes successfully for a real `regidx`
-- (`get_config_use_abi_names` is hard-wired to `false`, which forces the
-- arch-name branch instead of the unreachable assertion-failure branch).
theorem reg_name_forwards_pure (reg : regidx) :
    ∃ c, reg_name_forwards reg = (pure c : SailM String) := by
  unfold reg_name_forwards
  simp only [encdec_reg_forwards_matches, get_config_use_abi_names, Functions.not]
  exact ⟨_, rfl⟩

-- `xreg_write_callback` only builds a debug name and calls
-- `xreg_full_write_callback`, which returns `()` unconditionally, so the
-- whole callback never touches `regs`.
theorem xreg_write_callback_pure (reg : regidx) (value : BitVec 64) :
    xreg_write_callback reg value = (pure () : SailM Unit) := by
  unfold xreg_write_callback
  obtain ⟨c, hc⟩ := reg_name_forwards_pure reg
  rw [hc]
  simp

-- Reading back a register right after writing it returns the written
-- value, with the write's state effect kept on both sides. `rX`/`wX` are
-- generated as a 31-way match on the register index rather than an
-- indexed access, so the case split below has to mirror that shape.
theorem rX_wX_same (rd : regidx) (v : BitVec 64) (h : rd ≠ zreg) :
    (do wX_bits rd v; rX_bits rd) = (do wX_bits rd v; pure v) := by
  obtain ⟨i⟩ := rd
  have hi : i ≠ 0 := by
    intro heq; apply h; subst heq; unfold zreg; rfl
  unfold wX_bits rX_bits wX rX
  dsimp only
  have hr : (BitVec.toNatInt i).toNat = i.toNat := by simp [Sail.BitVec.toNatInt]
  rw [hr]
  have hbound : i.toNat < 32 := i.isLt
  have hne : i.toNat ≠ 0 := by
    intro hc
    apply hi
    exact BitVec.eq_of_toNat_eq (by simpa using hc)
  match i.toNat, hne with
  | 0, hne => exact absurd rfl hne
  | 1, _ | 2, _ | 3, _ | 4, _ | 5, _ | 6, _ | 7, _ | 8, _ | 9, _ | 10, _
  | 11, _ | 12, _ | 13, _ | 14, _ | 15, _ | 16, _ | 17, _ | 18, _ | 19, _ | 20, _
  | 21, _ | 22, _ | 23, _ | 24, _ | 25, _ | 26, _ | 27, _ | 28, _ | 29, _ | 30, _
  | (_ + 31), _ =>
    simp [xreg_write_callback_pure, regval_into_reg, regval_from_reg]
    exact wX_rX_register_same _ _

-- execute_MIN3_correct, stated honestly: rd really gets written, and
-- reading it back afterwards yields the spec's minimum.
theorem execute_MIN3_correct
    (rs1 rs2 rd : regidx) (hrd : rd ≠ zreg) :
    (do let _ <- execute_MIN3 rs2 rs1 rd
        rX_bits rd)
      =
    (do let a ← rX_bits rs1
        let b ← rX_bits rs2
        wX_bits rd (spec_min_s a b)
        pure (spec_min_s a b)) := by
  have step1 : (execute_MIN3 rs2 rs1 rd >>= fun _ => rX_bits rd)
      = (spec_min3_impl rs1 rs2 rd >>= fun _ => rX_bits rd) := by
    rw [← execute_MIN3_effect]
    simp
  rw [step1]
  unfold spec_min3_impl
  simp only [bind_assoc, rX_wX_same _ _ hrd]
