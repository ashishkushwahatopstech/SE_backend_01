#include<stdio.h>
main(){
	printf("Swapping 2 variables values without 3rd Variables\n");
	int a=2,b=4;
	printf("The Values of Num1 %d and Num2 is %d\n", a,b);
	a= a+b;
	b= a-b;
	a= a-b;
	printf("The Values of Num1 %d and Num2 is %d\n", a,b);
}
