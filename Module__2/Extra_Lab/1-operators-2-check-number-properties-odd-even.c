//Extra lab: 1 Operators:
//LAB EXERCISE 2: Check Number Properties
// Write a C program that takes an integer from the user and checks the following using
//different operators:
#include<stdio.h>
main(){
	//check Whether the number is even or odd.
	int num;
	printf("\nEnter Number: ");
	scanf("%d", &num);
	if (num%2==0){
		printf("\nThe Number %d is Even.", num);
	}
	else{
		printf("\nThe Number %d is Odd.", num);
	}
	//Whether the number is positive, negative, or zero
	if(num>0){
		printf("\nThe Number is Positive.");
	}
	else if (num<0){
		printf("\nThe Number is Negative.");
	}
	else {
		printf("\nThe Number is Zero.");
	}
	//Whether the number is a multiple of both 3 and 5.
	if(num %3==0 && num%5 == 0){
		printf("\nThe Number %d is Multiple of both 3 and 5. ", num);
	}
	else{
		printf("\nThe Number %d is Not a Multiple of Both 3 and 5.", num);
	}
}

