#include "ex09.h"
#include <stdio.h>

uint8_t loop_until_bit_is_set(uint8_t registre, uint8_t bit) {
    int fois = 0;
    while (!(registre & (1 << bit))) {
        // Attendre jusqu'à ce que le bit soit allumé

            printf("%d", fois);
            fois++;

    }
    
    return registre; 
}
