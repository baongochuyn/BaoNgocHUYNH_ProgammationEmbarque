#include "ex09.h"

uint8_t loop_until_bit_is_clear(uint8_t registre, uint8_t bit) {
    while (registre & (1 << bit)) {
    }
    
    return registre; 
}
