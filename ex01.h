#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *fuzbiz(int n) {
    if (n % 7 == 0 && n % 11 == 0) {
        return "fuzbiz";
    } else if (n % 7 == 0) {
        return "fuz";
    } else if (n % 11 == 0) {
        return "biz";
    } else {
        return NULL;
    }
}


