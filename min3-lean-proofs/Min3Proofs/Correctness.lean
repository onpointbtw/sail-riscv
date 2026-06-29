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

-- the if from execute MIN3 is equivalent to the spec_min_s function
-- theorem min3_core (a b : BitVec 64) :
--     (if zopz0zI_s a b then a else b) = spec_min_s a b := by
--   unfold spec_min_s
--   rw [zopz0zI_s_eq_slt]

-- TODO
-- theorem rX_wX_same (rd : regidx) (v : BitVec 64) (h : rd ≠ zreg) :
--     (do wX_bits rd v; rX_bits rd) = (pure v : SailM _) := by
--   sorry

-- theorem execute_MIN3_correct
--     (rs1 rs2 rd : regidx) (hrd : rd ≠ zreg) :
--     (do let _ <- execute_MIN3 rs2 rs1 rd
--         rX_bits rd)
--       =
--     (do let a ← rX_bits rs1
--         let b ← rX_bits rs2
--         pure (spec_min_s a b)) := by
--   unfold execute_MIN3
--   simp only [bind_assoc, pure_bind, rX_wX_same _ _ hrd, min3_core]

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
