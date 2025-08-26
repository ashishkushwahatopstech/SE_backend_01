#include<stdio.h>
main(){
	printf("Swapping Variables Using 3rd Variables\n");
	int a=2,b=8,c;
	printf("\nThe Value of Num1 is %d Num2 is %d", a,b);
	c=a;
	a=b;
	b=c;
	printf("\nNow the Value of Num1 is %d and Num2 is %d", a,b);
	return 0;
}
