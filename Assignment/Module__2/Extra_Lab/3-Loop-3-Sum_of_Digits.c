#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int original = n;
    int sum = 0;
    int reversed = 0;
    int digit;

   

    while (n > 0) {
        digit = n % 10;           
        sum += digit;             
        reversed = reversed * 10 + digit; 
        n = n / 10;               
    }

    printf("Sum of digits of %d = %d\n", original, sum);
    printf("Reversed number of %d = %d\n", original, reversed);

    return 0;
}

