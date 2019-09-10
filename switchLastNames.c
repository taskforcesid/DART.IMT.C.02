#include <stdio.h>

int main (){
    int numberOfRecords = 0;
    char lastName[101];
    char firstName[101];
    
    scanf("%d", &numberOfRecords);
    for(int i=0; i < numberOfRecords; i++){
        scanf("%s %s",firstName, lastName);
        printf("%s %s\n", lastName, firstName);
    }
   
}
