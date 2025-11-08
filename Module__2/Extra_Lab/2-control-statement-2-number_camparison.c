//LAB EXERCISE 2: Number Comparison
//• Write a C program that takes three numbers from the user and determines:

#include<stdio.h>
main(){
	int num1,num2,num3;
	printf("Enter 3 Different Number to Find \n 1. Largest Number \n 2. Smallest Number\n");
	scanf("%d %d %d", &num1,&num2,&num3);
	if(num1>num2){
		if(num1>num3){
			printf("\n%d is Largest Number",num1);
		}
		else{
			printf("\n%d is Largest Number ", num3);
		}	
	}
	else if(num2>num3){
		printf("\n%d is Largest Number", num2);
	}
	else{
		printf("\n%d is Largest Number", num3);
	}
	if(num1<num2){
		if(num1<num3){
			printf("\n%d is smallest Number",num1);
		}
		else{
			printf("\n%d is smallest Number ", num3);
		}	
	}
	else if(num2<num3){
		printf("\n%d is smallest Number", num2);
	}
	else{
		printf("\n%d is smallest Number", num3);
	}
	
}
