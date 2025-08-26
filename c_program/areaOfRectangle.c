#include<stdio.h>
main(){
	printf("Finding Area of Rectangle \n");
	float length,width,area;
	printf("\nEnter Length of Rectangle: ");
	scanf("%f", &length);
	printf("Enter Width of Rectangle: ");
	scanf("%f", &width);
	printf("Area of Rectangle is: %.2f", area = length * width);
	return 0;
	
}
