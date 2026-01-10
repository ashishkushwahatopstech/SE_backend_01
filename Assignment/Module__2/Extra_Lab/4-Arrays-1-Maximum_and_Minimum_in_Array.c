#include <stdio.h>

int main() {
    int arr[10];
    int i;
    
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    int min = arr[0];
    int max = arr[0];
    
    for (i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
    
    
    for (i = 0; i < 10 - 1; i++) {
        int j;
        for (j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
               
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

