/*
Write a C program to check if a number is even or odd using an if-else
statement. Extend the program using a switch statement to display the month
name based on the user’s input (1 for January, 2 for February, etc.).
*/

#include<stdio.h>
main(){
	int num1;
	printf("\nEnter a Number: ");
	scanf("%d", &num1);
	//number should be between 1 and 12 for furthur switch statement
	if (num1 < 1 || num1 > 12){
		printf("Invalid Number! Enter a Valid Numer From 1 to 12");
	}
		else{
			if(num1%2==0){
			printf("Numer %d is Even ", num1);
		}
			else{
			printf("Number %d is odd", num1);
		}
	}
	//from user input the switch will trigger specific case btw 1 to 12.
	switch(num1){
		case 1:
			printf("\nJanuary");
			break;
		case 2:
			printf("\nfabruary");
			break;
		case 3:
			printf("\nMarch");
			break;
		case 4:
			printf("\nApril");
			break;
		case 5:
			printf("\nMay");
			break;
		case 6:
			printf("\nJune");
			break;
		case 7:
			printf("\nJuly");
			break;
		case 8:
			printf("\nAugust");
			break;
		case 9:
			printf("\nSeptember");
			break;
		case 10:
			printf("\nOctober");
			break;
		case 11:
			printf("\nNovember");
			break;
		case 12:
			printf("\nDecember");
			break;
		default:
			printf("\nInvalid Number! The Entered value should be Between 1-12");
	}
	
}
