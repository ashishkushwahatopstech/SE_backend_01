#include <stdio.h>

int main() {
    int rows, i, j,k;
    int triangle[20][20]; 
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
     for(k=rows;k>i;k--){
     	printf(" ");
	 }	
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                triangle[i][j] = 1;
            else
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];

            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}

