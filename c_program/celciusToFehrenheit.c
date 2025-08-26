#include <stdio.h>
main(){
	printf("Converting Celcius into Fehrenheit \n");
	float c,f;
	printf("\n Enter a Temperature in Celcius : ");
	scanf("%f", &c);
	printf("The Celcius is %f and the Fehrenheit is %f", c, f = (c*1.8)+32);
	return 0;
}
