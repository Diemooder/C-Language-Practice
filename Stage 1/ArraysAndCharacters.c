#include <stdio.h>
#include <string.h>

int main(){
	
	char text[256];
	printf("Enter a word: ");
	fflush(stdout);
	scanf("%s", &text);
	
	int vowels[5] = {0,}; 
	char vowelSymbols[5] = {'a', 'e', 'i', 'o', 'u'};
	for(int i = 0; i < strlen(text); i++){
		switch(text[i]){
			case('a'):
				vowels[0]++;
				break;
			case('e'):
				vowels[1]++;
				break;
			case('i'):
				vowels[2]++;
				break;
			case('o'):
				vowels[3]++;
				break;
			case('u'):
				vowels[4]++;
				break;
		}
	}

	printf("Vowel counts: ");
	for(int i = 0; i < 5; i++){
		printf("%c: %d\n", vowelSymbols[i], vowels[i]);
	}
	
	return 0;
}