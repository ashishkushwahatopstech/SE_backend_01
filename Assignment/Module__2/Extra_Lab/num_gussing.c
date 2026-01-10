#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
	int num,n,secret, guess;
	n=5;
	srand(time(0));
	secret=rand()%100+1;
	//printf("%d", secret);
	
	for(num=0;num<n;num++){
		printf("\nNo. of Attempt - %d", num+1);
		printf("\nGuess! : ");
		scanf("%d", &guess);
	
		if(guess==secret){
			printf("\nCorrect Guess!");
			break;
		}
		else if(guess>secret){
			printf("\nChoose Some Lower Number");
		}
		else{
			printf("\nChoose Some Higher Number");
		}
	}
}
