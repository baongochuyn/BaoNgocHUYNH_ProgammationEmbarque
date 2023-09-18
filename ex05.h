#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void draw_rectangle(int height, int width, char border, char
corner, char inside){
    for(int i = 0; i < height; i++){
        for(int x = 0; x < width; x++){
            if(i == 0 && x == 0 || i == 0 && x == width -1 || i == height -1 && x== 0 || i == height -1 && x== width -1 ){
                printf("%c",corner);
            }
            else if(i == 0 || x == 0 || i == height -1 || x == width -1){
                printf("%c",border);
            }else{
                printf("%c",inside);
            }
        }
        printf("\n");
    }
    return;
}