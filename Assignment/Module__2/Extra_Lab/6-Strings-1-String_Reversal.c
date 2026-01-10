#include <stdio.h>

int main() {
    char str[20];
    int i, length = 0;

    printf("Enter a string: ");
    
    
    for(i = 0; i < 20; i++) {
        scanf("%c", &str[i]);
        if(str[i] == '\n') { 
            str[i] = '\0';   
            break;
        }
    }

    
    while(str[length] != '\0') {
        length++;
    }

   
    printf("Reversed string: ");
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}

