#include <stdio.h>
#include "ex04.h"

int main() {
    const char * str;
    printf("Entrez un chaine : ");
    scanf("%s",&str);

    char cha;
    printf("Entrez un caractaire : ");
    scanf("%s",&cha);

    int res = count_char_in_str(cha, str);
    printf("\"%d\"\n", res);
}