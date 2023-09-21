#ifndef EX11_H
#define EX11_H

#include <stdint.h>

// Macro pour ex08
#define BIT_IS_SET(registre, bit) (((registre) & (1 << (bit))) != 0)

// Macro pour ex09
#define LOOP_UNTIL_BIT_IS_SET(registre, bit) \
    do { \
        while (!(BIT_IS_SET((registre), (bit)))) {} \
    } while (0)

// Macro pour ex10
#define LOOP_UNTIL_BIT_IS_CLEAR(registre, bit) \
    do { \
        while (BIT_IS_SET((registre), (bit))) {} \
    } while (0)

#endif 
