#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int count = 0;
int count_me(){
    count++;
    return count;
}