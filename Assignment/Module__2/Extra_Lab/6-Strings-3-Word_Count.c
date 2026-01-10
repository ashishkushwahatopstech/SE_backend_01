#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    int count = 0;

    printf("Enter a sentence: ");
    gets(sentence);
    int i;
   
    for (i = 0; sentence[i] != '\0'; i++) {
      
        if (sentence[i] == ' ' && sentence[i + 1] != ' ' && sentence[i + 1] != '\0' && sentence[i + 1] != '\n') {
            count++;
        }
    }

    
    if (sentence[0] != ' ' && sentence[0] != '\n') {
        count++;
    }

    printf("Number of words: %d\n", count);

    return 0;
}

