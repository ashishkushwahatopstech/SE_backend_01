/*
Write num1C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them. Display the results.

*/
#include<stdio.h>
main(){
	int num1;
	int num2;
	printf("\nEnter 2 Number to Perform Arithmetic , relational and logical operations: ");
	printf("\nNum1: ");
	scanf("%d", &num1); // Taking input value 1
	printf("\nNum2: ");
	scanf("%d", &num2); // taking input value 2
	// arithmetic operators
	printf("\n---------Arithemetic Operatios -----------");
	printf("\nAddition of %d and %d is %d", num1, num2, num1 + num2);
	printf("\nDivision of %d and %d is %.2f", num1, num2, num1 / num2);
	printf("\nMultiplication of %d and %d is %d", num1, num2, num1 * num2);
	printf("\nSubtraction of %d and %d is %d", num1, num2, num1 - num2);
	printf("\nModules of %d and %d is %d", num1, num2, num1 % num2);
	// relationAL OPerators
	printf("\n\n------------relational operations ----------");
	printf("\n--- Relational Operations ---\n");
    printf("num1==num2: %s\n", (num1==num2) ? "true" : "false");
    printf("num1!=num2: %s\n", (num1!=num2) ? "true" : "false");
    printf("num1<num2 : %s\n", (num1<num2) ? "true" : "false");
    printf("num1>num2 : %s\n", (num1>num2) ? "true" : "false");
    printf("num1<=num2: %s\n", (num1<=num2) ? "true" : "false");
    printf("num1>=num2: %s\n", (num1>=num2) ? "true" : "false");

    // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("(num1&&num2): %s\n", (num1&&num2) ? "true" : "false");
    printf("(num1||num2): %s\n", (num1||num2) ? "true" : "false");
    printf("!num1    : %s\n", (!num1) ? "true" : "false");
    printf("!num2     : %s\n", (!num2) ? "true" : "false");
}
