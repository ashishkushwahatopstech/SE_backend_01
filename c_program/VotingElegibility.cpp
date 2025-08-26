#include<stdio.h>
main(){
	printf("Checking Eligibility of Voting\n");
	int age;
	printf("\nEnter Your Age: ");
	scanf("%d", &age);
	if(age<18){
		printf("\nYou are not Eligible");
	}
	else{
		printf("\nYou are eligible");
	}
	return 0;
}
