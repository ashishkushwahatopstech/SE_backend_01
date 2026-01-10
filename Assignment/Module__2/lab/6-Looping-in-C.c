/*
Write a C program to print numbers from 1 to 10 using all three types of loops
(while, for, do-while).

*/
#include<stdio.h>
main(){
	int i;
	printf("\nFor Loop");
	//entry control loop
	for (i=1; i<=10; i++){
		printf("\ni=%d", i);
	}
	printf("\n While Loop");
	//entry control loop
	i=1;
	while(i<=10){
		printf("\n i=%d", i);
		i++;
	}
	//exit controll loop
	i=1;
	printf("\n Do...While Loop");
	do{
		printf("\n i=%d", i);
		i++;
	}while(i<=10);
}
