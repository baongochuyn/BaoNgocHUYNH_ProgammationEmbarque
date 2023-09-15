#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_prime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return i;
        }
    }
    return 0;
}