#include<stdio.h>
main(){
	printf("Find Leap year\n");
	int year;
	printf("\nenter the Year: ");
	scanf("%d", &year);
	((year%4==0 && year%100!=0 ) || year%400==0)?printf("\nThis is Leap year"):printf("\nThis Is not a Leap year");
	
	return 0;
}
