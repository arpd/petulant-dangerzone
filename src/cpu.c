#include "cpu.h"

/* opcodes: http://www.pastraiser.com/cpu/gameboy/gameboy_opcodes.html */

/* 8bit loads */

void ld_B_B(cpu_state* s) {
    s->bc.bytes.first = s->bc.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_B_C(cpu_state* s) {
    s->bc.bytes.first = s->bc.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_B_D(cpu_state* s) {
    s->bc.bytes.first = s->de.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_B_E(cpu_state* s) {
    s->bc.bytes.first = s->de.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_B_H(cpu_state* s) {
    s->bc.bytes.first = s->hl.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_B_L(cpu_state* s) {
    s->bc.bytes.first = s->hl.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_B_addrof_HL(cpu_state* s) {
    /* FIXME: Pass this through the MMU rather than a flat array */
    word address = s->hl.word;
    s->bc.bytes.first = memory[address];
    s->last_m = 1;
    s->last_t = 8;
}

/* ------------------------------------------------------------------------- */
void ld_B_A(cpu_state* s) {
    s->bc.bytes.first = s->af.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_C_B(cpu_state* s) {
    s->bc.bytes.second = s->bc.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_C_C(cpu_state* s) {
    s->bc.bytes.second = s->bc.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_C_D(cpu_state* s) {
    s->bc.bytes.second = s->de.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_C_E(cpu_state* s) {
    s->bc.bytes.second = s->de.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_C_H(cpu_state* s) {
    s->bc.bytes.second = s->hl.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_C_L(cpu_state* s) {
    s->bc.bytes.second = s->hl.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_C_addrof_HL(cpu_state* s) {
    /* FIXME: Pass this through the MMU rather than a flat array */
    word address = s->hl.word;
    s->bc.bytes.second = memory[address];
    s->last_m = 1;
    s->last_t = 8;
}

/* ------------------------------------------------------------------------- */
void ld_C_A(cpu_state* s) {
    s->bc.bytes.second = s->af.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_D_B(cpu_state* s) {
    s->de.bytes.first = s->bc.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_D_C(cpu_state* s) {
    s->de.bytes.first = s->bc.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_D_D(cpu_state* s) {
    s->de.bytes.first = s->de.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_D_E(cpu_state* s) {
    s->de.bytes.first = s->de.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_D_H(cpu_state* s) {
    s->de.bytes.first = s->hl.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_D_L(cpu_state* s) {
    s->de.bytes.first = s->hl.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_D_addrof_HL(cpu_state* s) {
    /* FIXME: Pass this through the MMU rather than a flat array */
    word address = s->hl.word;
    s->de.bytes.first = memory[address];
    s->last_m = 1;
    s->last_t = 8;
}

/* ------------------------------------------------------------------------- */
void ld_D_A(cpu_state* s) {
    s->de.bytes.first = s->af.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_E_B(cpu_state* s) {
    s->de.bytes.second = s->bc.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_E_C(cpu_state* s) {
    s->de.bytes.second = s->bc.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_E_D(cpu_state* s) {
    s->de.bytes.second = s->de.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_E_E(cpu_state* s) {
    s->de.bytes.second = s->de.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_E_H(cpu_state* s) {
    s->de.bytes.second = s->hl.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_E_L(cpu_state* s) {
    s->de.bytes.second = s->hl.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_E_addrof_HL(cpu_state* s) {
    /* FIXME: Pass this through the MMU rather than a flat array */
    word address = s->hl.word;
    s->de.bytes.second = memory[address];
    s->last_m = 1;
    s->last_t = 8;
}

/* ------------------------------------------------------------------------- */
void ld_E_A(cpu_state* s) {
    s->de.bytes.second = s->af.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_H_B(cpu_state* s) {
    s->hl.bytes.first = s->bc.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_H_C(cpu_state* s) {
    s->hl.bytes.first = s->bc.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_H_D(cpu_state* s) {
    s->hl.bytes.first = s->de.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_H_E(cpu_state* s) {
    s->hl.bytes.first = s->de.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_H_H(cpu_state* s) {
    s->hl.bytes.first = s->hl.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_H_L(cpu_state* s) {
    s->hl.bytes.first = s->hl.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_H_addrof_HL(cpu_state* s) {
    /* FIXME: Pass this through the MMU rather than a flat array */
    word address = s->hl.word;
    s->hl.bytes.first = memory[address];
    s->last_m = 1;
    s->last_t = 8;
}

/* ------------------------------------------------------------------------- */
void ld_H_A(cpu_state* s) {
    s->hl.bytes.first = s->af.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_L_B(cpu_state* s) {
    s->hl.bytes.second = s->bc.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_L_C(cpu_state* s) {
    s->hl.bytes.second = s->bc.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_L_D(cpu_state* s) {
    s->hl.bytes.second = s->de.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_L_E(cpu_state* s) {
    s->hl.bytes.second = s->de.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_L_H(cpu_state* s) {
    s->hl.bytes.second = s->hl.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_L_L(cpu_state* s) {
    s->hl.bytes.second = s->hl.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_L_addrof_HL(cpu_state* s) {
    /* FIXME: Pass this through the MMU rather than a flat array */
    word address = s->hl.word;
    s->hl.bytes.second = memory[address];
    s->last_m = 1;
    s->last_t = 8;
}

/* ------------------------------------------------------------------------- */
void ld_L_A(cpu_state* s) {
    s->hl.bytes.second = s->af.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_addrof_HL_B(cpu_state* s) {
    s->memory[s->hl.word] = s->bc.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_addrof_HL_C(cpu_state* s) {
    s->memory[s->hl.word] = s->bc.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_addrof_HL_D(cpu_state* s) {
    s->memory[s->hl.word] = s->de.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_addrof_HL_E(cpu_state* s) {
    s->memory[s->hl.word] = s->de.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_addrof_HL_H(cpu_state* s) {
    s->memory[s->hl.word] = s->hl.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_addrof_HL_L(cpu_state* s) {
    s->memory[s->hl.word] = s->hl.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
/* void ld_addrof_HL_addrof_HL(cpu_state* s) {
    word address = s->hl.word;
    s->memory[s->hl.word] = memory[address];
    s->last_m = 1;
    s->last_t = 8;
}
*/
/* ------------------------------------------------------------------------- */
void ld_addrof_HL_A(cpu_state* s) {
    s->memory[s->hl.word] = s->af.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_A_B(cpu_state* s) {
    s->af.bytes.first = s->bc.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_A_C(cpu_state* s) {
    s->af.bytes.first = s->bc.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_A_D(cpu_state* s) {
    s->af.bytes.first = s->de.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_A_E(cpu_state* s) {
    s->af.bytes.first = s->de.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_A_H(cpu_state* s) {
    s->af.bytes.first = s->hl.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_A_L(cpu_state* s) {
    s->af.bytes.first = s->hl.bytes.second;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
void ld_A_addrof_HL(cpu_state* s) {
    /* FIXME: Pass this through the MMU rather than a flat array */
    word address = s->hl.word;
    s->af.bytes.first = memory[address];
    s->last_m = 1;
    s->last_t = 8;
}

/* ------------------------------------------------------------------------- */
void ld_A_A(cpu_state* s) {
    s->af.bytes.first = s->af.bytes.first;
    s->last_m = 1;
    s->last_t = 4;
}

/* ------------------------------------------------------------------------- */
/* TODO: Remaining 8-bit loads; 4x-7x opcodes are done, remaining are:
 *  [0-3]2, [0-3]6, [0-3]a, [0-3]e, e0, f0, e2, f2, ea, fa
 */
