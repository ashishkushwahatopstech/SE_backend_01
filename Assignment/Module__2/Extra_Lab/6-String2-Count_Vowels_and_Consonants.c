#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0, digits = 0, special = 0;
    
    printf("Enter a string: ");
    gets(str);
    int i;
    
    for ( i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else if (ch != ' ' || ch != '\n') {
            special++;
        }
    }
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
    
    return 0;
}

