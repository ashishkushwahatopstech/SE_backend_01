/*
Write a C program that stores 5 integers in a one-dimensional array and prints
them. Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements.
*/



#include<stdio.h>
main(){
	int size=3,i,j,k;
	long long sum=0;
	//store 5 integer in one dimension array
	int ary[5]={1,2,3,4,5};
	printf("\nOne Dimension Array Values are: ");
	for(i=0;i<5;i++){
		printf("%d", ary[i]);
	}
	
	printf("\n 3 dimension Array are: ");
	
	int arry[size][size][size];
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			for(k=0;k<size;k++){
				printf("\n[%d][%d][%d]=",i,j,k);
				scanf("%d",&arry[i][j][k]);
				sum=sum+arry[i][j][k];
			}
			
		}
	}printf("\nSum of Array is : %lld", sum);
}
