// $Id: opcodes.h,v 1.7 2004/12/22 12:40:07 iain Exp $

#ifndef OPCODES_H
#define OPCODES_H

// Glulx opcodes.

#define op_nop          (0x00)

#define op_add          (0x10)
#define op_sub          (0x11)
#define op_mul          (0x12)
#define op_div          (0x13)
#define op_mod          (0x14)
#define op_neg          (0x15)
#define op_bitand       (0x18)
#define op_bitor        (0x19)
#define op_bitxor       (0x1A)
#define op_bitnot       (0x1B)
#define op_shiftl       (0x1C)
#define op_sshiftr      (0x1D)
#define op_ushiftr      (0x1E)

#define op_jump         (0x20)
#define op_jz           (0x22)
#define op_jnz          (0x23)
#define op_jeq          (0x24)
#define op_jne          (0x25)
#define op_jlt          (0x26)
#define op_jge          (0x27)
#define op_jgt          (0x28)
#define op_jle          (0x29)
#define op_jltu         (0x2A)
#define op_jgeu         (0x2B)
#define op_jgtu         (0x2C)
#define op_jleu         (0x2D)

#define op_call         (0x30)
#define op_return       (0x31)
#define op_catch        (0x32)
#define op_throw        (0x33)
#define op_tailcall     (0x34)

#define op_copy         (0x40)
#define op_copys        (0x41)
#define op_copyb        (0x42)
#define op_sexs         (0x44)
#define op_sexb         (0x45)
#define op_aload        (0x48)
#define op_aloads       (0x49)
#define op_aloadb       (0x4A)
#define op_aloadbit     (0x4B)
#define op_astore       (0x4C)
#define op_astores      (0x4D)
#define op_astoreb      (0x4E)
#define op_astorebit    (0x4F)

#define op_stkcount     (0x50)
#define op_stkpeek      (0x51)
#define op_stkswap      (0x52)
#define op_stkroll      (0x53)
#define op_stkcopy      (0x54)

#define op_streamchar   (0x70)
#define op_streamnum    (0x71)
#define op_streamstr    (0x72)
#define op_streamunichar (0x73)

#define op_gestalt      (0x100)
#define op_debugtrap    (0x101)
#define op_getmemsize   (0x102)
#define op_setmemsize   (0x103)
#define op_jumpabs      (0x104)

#define op_random       (0x110)
#define op_setrandom    (0x111)

#define op_quit         (0x120)
#define op_verify       (0x121)
#define op_restart      (0x122)
#define op_save         (0x123)
#define op_restore      (0x124)
#define op_saveundo     (0x125)
#define op_restoreundo  (0x126)
#define op_protect      (0x127)

#define op_glk          (0x130)

#define op_getstringtbl (0x140)
#define op_setstringtbl (0x141)
#define op_getiosys     (0x148)
#define op_setiosys     (0x149)

#define op_linearsearch (0x150)
#define op_binarysearch (0x151)
#define op_linkedsearch (0x152)

#define op_callf        (0x160)
#define op_callfi       (0x161)
#define op_callfii      (0x162)
#define op_callfiii     (0x163)

#define op_mzero        (0x170)
#define op_mcopy        (0x171)
#define op_malloc       (0x178)
#define op_mfree        (0x179)

#define op_accelfunc    (0x180)
#define op_accelparam   (0x181)

// Special cache control opcodes.

#define op_git_setcacheram (0x7940)
#define op_git_prunecache  (0x7941)

#endif // OPCODES_H
