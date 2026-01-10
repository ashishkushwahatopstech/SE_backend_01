#include<stdio.h>
int fact,ans;
int factorial(int fact){
	if(fact==0){
		return 1 ;	}
		else{
			return fact*factorial(fact-1);
	
	}

}
main(){
	 printf("enter number");
    scanf("%d",&fact);
    printf("%d",factorial(fact));
	
}

