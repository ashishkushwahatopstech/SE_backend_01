#include<stdio.h>
main(){
	int num,i,j,k;
	printf("\nEnter Value: ");
	scanf("%d", &num);
	for(i=0;i<num;i++){
		int value=1;
		for(j=num;j>i;j--){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("%d ", value);
			value = value * (i-k) / (k+1);
		}
		printf("\n");
	}
}
