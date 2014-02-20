#ifndef __Z80_CPU_H
#define __Z80_CPU_H

typedef unsigned char  byte;
typedef unsigned short word;

union _register {
    struct {
        byte first, second;
    } bytes;
    word word;
}

union _flags {
    struct {
        byte zero:1;
        byte operation:1;
        byte half_carry:1;
        byte carry:1;
        byte reserved:4; /* These ALWAYS read 0, even if written with a 1 */
    } bits;
    byte full;
};

typedef struct cpu_state {
    /* general purpose registers as 16-bit pairs */
    union _register af,
                    bc,
                    de,
                    hl;
    /* clocks and utility registers */
    byte last_m, last_t, m, t;
    word pc, sp;
};

struct z80_cpu {
    cpu_state state;
    void* mmu;    /* TODO: implement */
    void* screen; /* TODO: implement */
    void* audio;  /* TODO: implement */
};
#endif /* __Z80_CPU_H */
