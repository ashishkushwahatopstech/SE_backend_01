#include <stdio.h>
#include <string.h>

int isPalindromeNumber(int n) {
    int original = n, reversed = 0, digit;
    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    return (original == reversed);
}

int isPalindromeString(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;
    while (i < j) {
        if (str[i] != str[j])
            return 0;  // Not a palindrome
        i++;
        j--;
    }
    return 1;  // Palindrome
}

int main() {
    int choice;
    
    printf("Choose an option:\n");
    printf("1. Check number palindrome\n");
    printf("2. Check string palindrome\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (isPalindromeNumber(num))
            printf("%d is a Palindrome number\n", num);
        else
            printf("%d is NOT a Palindrome number\n", num);

    } else if (choice == 2) {
        char str[100];
        printf("Enter a string: ");
        scanf("%s", str);

        if (isPalindromeString(str))
            printf("%s is a Palindrome string\n", str);
        else
            printf("%s is NOT a Palindrome string\n", str);

    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

