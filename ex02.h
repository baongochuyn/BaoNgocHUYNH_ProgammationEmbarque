#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void all_evens_to(int n){
    
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            printf("\"%d\"\n", i);
        }
    }
}