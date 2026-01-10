#include <stdio.h>

int main() {
    int num, N, i;

  
    printf("Enter the integer whose table you want: ");
    scanf("%d", &num);

    printf("Enter the range (how far, e.g. N): ");
    scanf("%d", &N) ;

    printf("Multiplication table of %d from 1 to %d:\n", num, N);
    for (i = 1; i <= N; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}

