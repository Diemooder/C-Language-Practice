#include <stdio.h>
#include <string.h>

int main(){
    char text[256];
    printf("Enter any string: ");
    fflush(stdout);
    scanf("%s", text);

    int freq[26] = {0};
    for(int i = 0; i < strlen(text); i++) {
        freq[text[i] - 'a']++;
    }

    printf("Letter counts:\n");
    for(int i = 0; i < 26; i++){
        if(freq[i] > 0) printf("%c: %d\n", 'a' + i, freq[i]);
    }

    return 0;
}