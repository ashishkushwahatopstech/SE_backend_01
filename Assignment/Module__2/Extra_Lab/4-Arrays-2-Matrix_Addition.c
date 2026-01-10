#include<stdio.h>
int i,j,k;
void getArray(int a[3][3]){
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n Enter [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			
			
			
		}
	}
}
void printArray(int a[3][3]){
	printf("\n===============\n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\ta[%d][%d]=%d",i,j,a[i][j]);
		}
		printf("\n");
	}
}
void sumArray(int a[3][3], int b[3][3], int c[3][3]) {
    int i, j, k;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
        	
	     c[i][j] = a[i][j] + b[i][j];
            
        }
    }
}

void multiplyArray(int a[3][3], int b[3][3], int c[3][3]) {
    int i, j, k;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            c[i][j] = 0;
            for(k = 0; k < 3; k++) {
            	
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
main(){
	int a[3][3],b[3][3],c[3][3];

	getArray(a);
	printArray(a);
	getArray(b);
	printArray(b);
	printf("multiply---------------");
	multiplyArray(a,b,c);
	printArray(c);
	printf("sum-------");
	sumArray(a,b,c);
	printArray(c);
		

}
