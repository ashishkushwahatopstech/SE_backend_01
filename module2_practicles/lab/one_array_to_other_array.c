#include<stdio.h>
main(){
	int i;
	int a[5];
	int c[5];
	printf("\n Enter a array Value: ");
	for(i=0;i<5;i++){
		printf("[%d]=",i);
		scanf("%d", &a[i]);
	}
	printf("-----------------------");
	for(i=0;i<5;i++){
		if(a[i]%2==0){
			c[i]=a[i];
			printf("\n%d", c[i]);
		}
	}
	
}
