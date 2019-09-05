#include <stdio.h>
/*
You arrive in front of a bridge that you must cross to reach 
a village before dark. Crossing the bridge is not free - the 
bridgekeeper asks you to roll two dice to determine the cost. 
You decide to write a program to verify that he is charging 
the right price.

Your program should read two integers, between 1 and 6, representing 
the values of each die. If the sum is greater than or equal to 10, 
then you must pay a special fee (36 coins). Otherwise, you pay twice 
the sum of the values of the two dice. Your program must then display 
the text "Special tax" or "Regular tax" followed by the amount you have 
to pay on the next line.
*/

int main (){
    int number1, number2;
    scanf("%d %d", &number1, &number2);
    int cost = 0;
    if ((number1+number2)>=10){
        cost = 36;
        printf("Special tax\n");
    }else{
        cost = 2*(number1+number2);
        printf("Regular tax\n");
    }
    printf("%d",cost);
    return 1;
    
}