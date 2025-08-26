#include<stdio.h>
main(){
	float p,n,r,i;
	printf("Simple Interest Calculater\n");
	printf("\n Enter Principle amount: ");
	scanf("%f", &p);
	printf("\n Enter Number of Peroid of Time(Years): ");
	scanf("%f", &n);
	printf("\n Enter Rate of Interest: ");
	scanf("%f", &r);
	printf("The Interest Rate for Rupees %.2f is %.2f", p, i= p*n*r/100 );
	return 0;
	
}
