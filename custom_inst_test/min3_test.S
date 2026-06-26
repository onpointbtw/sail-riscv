.section .text.init
.globl _start

_start:
    li x6, 10
    li x7, 3

    # funct7  rs2   rs1   funct3 rd    opcode  
    # 0000000 00111 00110 000    00101 0001011
    .word 0x0073028b    # min3 x5, x6, x7

    li x10, 3
    beq x5, x10, pass

fail:
    la t1, tohost
    li t0, 3
    sd t0, 0(t1)
    j fail

pass:
    la t1, tohost
    li t0, 1
    sd t0, 0(t1)
    j pass

.section .tohost, "aw", @progbits
.align 3
.globl tohost
tohost:
    .dword 0

.globl fromhost
fromhost:
    .dword 0
