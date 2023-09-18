#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_char_in_str(const char caractere, const char *str) {
    int count = 0; 
    // Parcourir chaque caractère
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == caractere) {
            count++; 
        }
    }
    return count; 
}
