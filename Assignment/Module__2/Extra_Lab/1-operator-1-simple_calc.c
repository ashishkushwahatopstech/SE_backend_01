// simple calculator
#include<stdio.h>
main(){
	double number,result;
	char opt;
	printf("Enter q to Exit \n");
	printf("\nEnter Num 1: ");
	scanf("%lf", &result);
	while(1){
		
		printf("\nEnter Operator : ");
		scanf(" %c", &opt);
		if(opt == 'q' || opt == 'Q'){
			printf("\n Calculator Exited\n");
			break;
		}
		printf("\nEnter Num2: ");
		scanf("%lf", &number);
		switch(opt){
			case '+':
				result +=number;
				break;
			case '-':
				result -=number;
				break;
			case '*':
				result -=number;
				break;
			case '/':
				if ( number != '0'){
					result /=number;
				}
				else {
					printf("\n Division By Zero Not Proced.");
					continue;
				}
				break;
			default:
				printf("\n Invalid Operator");
				continue;
						
		}
		printf("Result: %.2lf", result);
	}
	return 0;
}
