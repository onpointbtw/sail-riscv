union clause instruction = MIN3 : (regidx, regidx, regidx)

/* R-Type custom-0 encoding:
   funct7 = 0000000
   funct3 = 000
   opcode = 0001011
   https://docs.riscv.org/reference/isa/unpriv/rv-32-64g.html
 */
mapping clause encdec = MIN3(rs2, rs1, rd) <-> 0b0000000 @ encdec_reg(rs2) @ encdec_reg(rs1) @ 0b000 @ encdec_reg(rd) @ 0b0001011

function clause execute (MIN3(rs2, rs1, rd)) = {
    let rs1_val = X(rs1);
    let rs2_val = X(rs2);
    let smaller_val : xlenbits = if rs1_val <_s rs2_val then rs1_val else rs2_val;
    X(rd) = smaller_val;
    RETIRE_SUCCESS
}

mapping clause assembly = MIN3(rs2, rs1, rd) <-> "min3" ^ spc() ^ reg_name(rd) ^ sep() ^ reg_name(rs1) ^ sep() ^ reg_name(rs2)