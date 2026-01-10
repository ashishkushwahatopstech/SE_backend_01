#include <stdio.h>
int binomialCoeff(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}

int main() {
    int n,i,space,j;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++) {
        
        for (space = 0; space < n - i - 1; space++)
            printf("  ");

        for (j = 0; j <= i; j++)
            printf("%4d", binomialCoeff(i, j));

        printf("\n");
    }

    return 0;
}

