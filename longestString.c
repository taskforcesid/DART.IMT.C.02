/*Your job is to find the length of the longest word in a text with 
no punctuation or special characters of any kind - only contains words. 
To do so, please write a C-program that takes as a input first the number 
of words in a text, followed by all of the words in the text. The output 
of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not 
exceed 100 characters.*/

#include <stdio.h>


int main (){
    int numberOfWords = 0;
    scanf("%d", &numberOfWords);
    
    int i=0;
    char wordInput[101];
    int longestWordSize = 0;
    for(i = 0 ; i < numberOfWords; i++){
        //read the next word
        scanf("%s", wordInput);
        int wordSize = 0;
        char curr = wordInput[0];
        int j = 0;
        for(j = 0; j < 100 && curr != '\0'; j++){
            wordSize++;
            curr = wordInput[j+1];
        }
        if(wordSize  > longestWordSize){
            longestWordSize = wordSize;
        }
    }
    printf("%d", longestWordSize );
}
