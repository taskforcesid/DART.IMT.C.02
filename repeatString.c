#include <stdio.h>

int main (){
    int repeatCount = 0;
    char userInput[101];
    scanf("%d", &repeatCount);
    scanf("%s",userInput);
    int i;
    for (i = 0; i < repeatCount ; i++){
        printf("%s\n",userInput);
    }
}
