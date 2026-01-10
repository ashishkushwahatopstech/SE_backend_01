//function in c
/*
Write a C program that calculates the factorial of a number using a function.
Include function declaration, definition, and call.
*/
#include<stdio.h>
int factorial(int num1){
	int i,fact=1;
	for(i=1;i<=num1;i++){
		fact = fact * i;
	}
	return fact;
}
main(){
	int num2,result;
	printf("Enter a Positive Number: ");
	scanf("%d", &num2);
	
	if(num2<0){//checking positive number
		printf("Please Enter a Positve Value!");
	}
	else{
		result = factorial(num2);
		printf("Factorial of %d is %d", num2, result);
	}
}
