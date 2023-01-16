#include <cs50.h>
#include <stdio.h>

int main(void){
    int height = get_int("Height: ");
    while(height < 1 || height > 8){
        height = get_int("Height must be between 1 and 8! \nHeight: ");
    }

    for(int i = 1; i <= height; i++){
        for(int j = height; j > 0; j--){
            if(j > i){
                printf(" ");
                continue;
            }

            printf("#");
        }

        printf("  ");

        for(int j = 0; j < height; j++){
            if(j < i){
                printf("#");
            }
        }

        printf("\n");
    }
}