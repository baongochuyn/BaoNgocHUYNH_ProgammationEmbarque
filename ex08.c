#include "Ex08.h"

uint8_t bit_is_set(uint8_t registre, uint8_t bit) {
    // Vérifie si le bit est allumé
    return (registre & (1 << bit)) != 0;
}
