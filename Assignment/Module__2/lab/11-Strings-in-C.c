/*
Strings in C.
Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen().
*/
#include<stdio.h>
#include<string.h>
main(){
	char str1[100],str2[100];
	printf("Enter First Name: ");
	gets(str1);
	printf("Enter last Name: ");
	gets(str2);
	printf("Concatenated String: ");
	strcat(str1,str2);
	puts(str1);
	printf("Length of Concatenated String:");
	//strlen(str1);
	printf("%zu", strlen(str1));
}
