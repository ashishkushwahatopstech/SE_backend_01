#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n,result;
    

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 160; ++num) {
        originalNum = num;
        n = 0;
        result = 0;

       
        int temp = originalNum;
        while (temp != 0) {
            temp /= 10;
            ++n;
        }

        temp = originalNum;

      
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        if (result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}

