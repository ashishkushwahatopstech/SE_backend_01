#include<stdio.h>
main(){
	int i,j,n,k;
	int triangle[20][20];
	n=5;
	for(i=0;i<=n;i++){
		for(j=n;j>i;j--){
			printf("\t");
		}
		for(k=0;k<=i;k++){
			if(k==0 || k==i){
				triangle[i][k]=1;
			}
			else{
				triangle[i][k]= triangle[i-1][k-1] + triangle[i-1][k];
			}
			printf("\t%d\t", triangle[i][k]);
		}
		printf("\n");
	}
	return 0;
}
