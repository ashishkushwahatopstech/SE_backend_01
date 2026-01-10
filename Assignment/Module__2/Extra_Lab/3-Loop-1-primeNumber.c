#include<stdio.h>
main(){
	int num,flag,i,j;
	printf("\n Enter a number: ");
	scanf("%d", &num);
	i=2;
	while (i<=num){
		flag=0;
		j=2;
		while(j<=i/2){
			if(i%j==0){
				flag=1;
			}
		j++;
		}
		(flag==0)?printf("\t %d", i):printf("");
		i++;
	}
}
