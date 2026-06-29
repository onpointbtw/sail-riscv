union clause instruction = MIN3 : (regidx, regidx, regidx)

/* R-Type custom-0 encoding:
   funct7 = 0000000
   funct3 = 000
   opcode = 0001011
   https://docs.riscv.org/reference/isa/unpriv/rv-32-64g.html
 */
mapping clause encdec = MIN3(rs2, rs1, rd) <-> 0b0000000 @ encdec_reg(rs2) @ encdec_reg(rs1) @ 0b000 @ encdec_reg(rd) @ 0b0001011

// Pure core of MIN3, extracted so it can be SMT-checked.
function min3_op(a : xlenbits, b : xlenbits) -> xlenbits =
  if a <_s b then a else b

function clause execute (MIN3(rs2, rs1, rd)) = {
    let rs1_val = X(rs1);
    let rs2_val = X(rs2);
    X(rd) = min3_op(rs1_val, rs2_val);
    RETIRE_SUCCESS
}

mapping clause assembly = MIN3(rs2, rs1, rd) <-> "min3" ^ spc() ^ reg_name(rd) ^ sep() ^ reg_name(rs1) ^ sep() ^ reg_name(rs2)


$[test]
function test_min3_op() -> unit = {
    // Dieser Test wird nicht in der SMT-Umgebung ausgeführt
  assert(min3_op(zeros(), zeros()) == zeros());
  assert(min3_op(to_bits(1), zeros()) == zeros());
  assert(min3_op(zeros(), to_bits(1)) == zeros());
  assert(min3_op(to_bits(1), to_bits(1)) == to_bits(1));
  assert(min3_op(to_bits(8), to_bits(12)) == to_bits(8));
  assert(min3_op(to_bits(9), to_bits(12)) == to_bits(9));

  // Signed cases: -1 must be treated as smaller than any positive value,
  // even though its unsigned representation is the largest possible bit
  // pattern (all ones).
  assert(min3_op(ones(), zeros()) == ones());
  assert(min3_op(zeros(), ones()) == ones());
  assert(min3_op(ones(), to_bits(1)) == ones());

  let nine : xlenbits = to_bits(9);
  print_log("min3_op test passed, nine = " ^ hex_bits_str(nine));

  // Two negative values: -2 < -1.
  let neg_two : xlenbits = to_bits_truncate(-2);
  assert(min3_op(neg_two, ones()) == neg_two);

  // Signed extremes
  let int_min : xlenbits = to_bits_truncate(- (2 ^ (xlen - 1)));
  let int_max : xlenbits = to_bits_truncate(2 ^ (xlen - 1) - 1);
  assert(min3_op(int_min, int_max) == int_min);
  assert(min3_op(int_max, int_min) == int_min);
}

// min3 always returns one of its inputs, and it is <= both (signed).
$[property]
function min3_op_is_signed_min(a : xlenbits, b : xlenbits) -> bool = {
  let result = min3_op(a, b);
  (result == a | result == b) & (result <=_s a) & (result <=_s b)
}

// min3 ist kommutativ
$[property]
function min3_op_commutative(a : xlenbits, b : xlenbits) -> bool =
  min3_op(a, b) == min3_op(b, a)