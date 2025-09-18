#include <stdio.h>

int main() {
    int i;

    printf("Printing numbers from 1 to 10:\n");

    for (i = 1; i <= 10; i++) {
        if (i == 3) {
            continue;  
        }

        if (i == 5) {
            break;     // Stop the loop when i reaches 5
        }

        printf("i=%d\n", i);
    }

    return 0;
}

