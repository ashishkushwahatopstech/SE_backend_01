#include <stdio.h>
int a = 0, b = 1, next;
int fibbo(int n){
	if(n==0){
		return 1;
	}
	printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
        fibbo(n-1);
	
}

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibbo(n);

//    printf("Fibonacci Series:\n");
//    for (i = 0; i < n; i++) {
//        printf("%d ", a);
//        next = a + b;
//        a = b;
//        b = next;
//    }

    return 0;
}

