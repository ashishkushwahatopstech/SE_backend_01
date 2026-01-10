#include <stdio.h>

int main() {
    int N;
    printf("How many numbers? ");
    scanf("%d", &N);

    int arr[100]; 
    int i;
    for (i = 0; i < N; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

   int sum = 0;
    for (i = 0; i < N; i++) {
        sum += arr[i];
    }

    float average = (float) sum / N;

    printf("\nSum = %lld\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

