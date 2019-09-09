/*Create a program that displays on the screen a square of n x n stars, 
with the integer n given as an input.*/

#include <stdio.h>

int main (){
    int number = 0;
    int i = 0,j = 0;
    scanf("%d", &number);
    for(i = 0 ; i < number; i++){
        for(j = 0; j< number; j++){
            printf("*");
        }
        printf("\n");
    }
}
