#include<stdio.h>
main(){
	int i,j, row, space;
	printf("Enter Number of Rows Required");
	scanf("%d", &row);
	space= row-1;
	
	for( i=1; i<=row; i++ ){
		for(j = 0; j<=space; j++){
			printf(" ");
		}
		
		for ( j=1; j<= 2*i-1; j++){
			printf("*");
		}	
		printf("\n");
		space--;
		
		
		//for ( row=1; row<= space; row++){
		//	printf("3");
		//}
	}
	
	return 0;
}
