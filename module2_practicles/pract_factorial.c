#include<stdio.h>
int factorial(int num1);
int main(){
	int num2;
	printf("\n Enter a Numer");
	scanf("%d", &num2);
	if(num2<0){
		printf("Please Enter a Positive Number\n");
	}
	else{
		int result = factorial(num2);
		printf("The Factorial is %d", result );
	}
	
}
int factorial(num1){
	int fact =1;
	int i;
	for(i=1; i<=num1; i++){
		fact = fact * i;
	}
	return fact;
}
