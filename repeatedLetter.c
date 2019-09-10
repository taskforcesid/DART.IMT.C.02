/*
You are still conducting linguistic research! This time, you'd like to write 
a program to find out how many letters occur multiple times in a given word. 
Your program should read a word from the input and then sort the letters of 
the word alphabetically (by their ASCII codes). Next, your program should 
iterate through the letters of the word and compare each letter with the one 
following it. If these equal each other, you increase a counter by 1, making 
sure to then skip ahead far enough so that letters that occur more than twice 
are not counted again. You may assume that the word you read from the input 
has no more than 50 letters, and that the word is all lowercase.*/


#include <stdio.h>

int main (){
    char inputWord[51];
    scanf("%s", inputWord);

    int length = 0;
    char curr = inputWord[0];
    
    while (curr != '\0'){
        length++;
        curr = inputWord[length];
    }

    //bubble Sort the word
    int i =0 , j =0;
    
    for(i = 0; i < length; i++){
        for (j = 0; j < length; j++){
            if(inputWord[j]>inputWord[i]){
                char swap = inputWord[j];
                inputWord[j] = inputWord[i];
                inputWord[i] = swap;
            }
        }
    }
    int repeats =0;
    // find repeated values
    int k =0;
    for (k = 0 ; k < length; k++){
        if(inputWord[k]==inputWord[k+1])
        {
            if(k>0)
            {
                if(inputWord[k]!= inputWord[k-1])
                    repeats++;
            }else
            {
                repeats++;
            }
        }
    }
    
    printf("%d",repeats);
}
