#include<stdio.h>
#include<ctype.h>
main(){
	char a,b;
	printf("Enter Alphabets: ");
	scanf("%c", &a);
	
	b = tolower(a);

	char vowels;
	( b == 'a' ||  b=='e' || b=='i' || b=='o' || b=='u')?printf("The Entered Alphabets %c is Vowels", a):printf("The Entered Alphabets %c is Consonents", a);
	return 0;
}
