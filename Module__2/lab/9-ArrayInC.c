/*
Write a C program that stores 5 integers in a one-dimensional array and prints
them. Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements.
*/
#include<stdio.h>
int i,j,k;
int getarry(int a[3][3]){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%d][%d]=",i,j);
			scanf("%d", &a[i][j]);
		}
	}printf("\n------\n");
}
int printarray(int a[3][3]){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t[%d][%d]=%d",i,j,a[i][j]);
		}printf("\n");
	}
}
int addarry(int a[3][3],int b[3][3],int c[3][3]){
	printf("\nSum----\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]= a[i][j]+b[i][j];
		}
	}printf("\n-----------------------\n");
}
int multi(int a[3][3],int b[3][3],int c[3][3]){
	printf("\nMultiplication--\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=0;
			for(k=0;k<3;k++){
				c[i][j]+= a[i][k] * b[k][j];
			}
		}
	}printf("\n------\n");
}


main(){
	int a[3][3],b[3][3],c[3][3];
	// calling functions.
	getarry(a); 
	printarray(a);
	getarry(b);
	printarray(b);
	addarry(a,b,c);
	printarray(c);
	multi(a,b,c);
	printarray(c);
}
