/*You plan to make a delicious meal and want to take the money 
you need to buy the ingredients. Fortunately you know in advance 
the price per pound of each ingredient as well as the exact amount 
you need. The program should read in the number of ingredients (up 
to a maximum of 10 ingredients), then for each ingredient the price 
per pound. Finally your program should read the weight necessary for 
the recipe (for each ingredient in the same order). Your program 
should calculate the total cost of these purchases, then display it 
with 6 decimal places.
*/

#include <stdio.h>

int main (){
    double quantity[10];
    double prices[10];
    int numberOfItems = 0;
    scanf("%d", &numberOfItems);
    int i = 0;

    for(i = 0 ; i < numberOfItems; i++){
        scanf("%lf", &prices[i]);
    }

    for(i = 0 ; i < numberOfItems; i++){
        scanf("%lf", &quantity[i]);
    }
    
    double totalCost = 0.0;
    for(i = 0 ; i < numberOfItems ; i++){
        totalCost += prices[i]*quantity[i];
    }
    
    printf("%.6lf",totalCost);
}

