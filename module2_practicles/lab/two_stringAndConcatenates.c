/*
Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen().
*/
#include<stdio.h>
#include<string.h>
main(){
	char st1[20]="Hello! world";
	char st2[]="Bye! World";
	strcat(st1,st2);
	printf("%s", st1);
	return 0;
}




