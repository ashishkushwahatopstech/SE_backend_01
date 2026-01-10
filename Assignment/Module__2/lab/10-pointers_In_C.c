/*
Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.
*/
#include<stdio.h>
main(){
	int i=20;
	int *num=&i;
	printf("\nOriginal Value of i is %d", i);
	
	*num = 50; // num has adress of i
	printf("\nPointer Assigned to i is %d", *num);
	
}
