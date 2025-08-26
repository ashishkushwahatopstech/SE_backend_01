#include<stdio.h>
main(){
	printf("-----------Finding Area of Circle \n");
	float pi = 3.14; 
	float r, area;
	printf("\nEnter Radius of Circle: ");
	scanf("%f", &r);
	r *=r;
	area = pi* r;
	printf("The Area of Cirlce is : %.2f", area);
	return 0;
}
