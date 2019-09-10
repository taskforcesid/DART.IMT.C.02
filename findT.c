#include <stdio.h>

int main (){
	// read the value of the word
	char userInput[51];
	scanf ("%s", userInput);
	
	int index = -1;
	int wordLength = 0; // track the length of the string
	int found = -1; //default value

	char curr = userInput[0];

	int j =0;	
	for (j =0 ; j < 50 && curr != '\0'){
		wordLength++;
		if(userInput[j] == 't' || userInput[j] == 'T'){
			index = j;
		}
		curr = userInput[j+1];					
	}
	
	if(index != -1) {
		if(index < (wordLength / 2))
		{
			found = 1;
		}else{
			found = 2;
		}
	}
	printf("%d", found);
}
	
