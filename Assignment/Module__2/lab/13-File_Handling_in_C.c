/*
Write a C program to create a file, write a string into it, close the file, then
open the file again to read and display its contents.
*/
#include<stdio.h>
main(){
	FILE *a;
	char fl[100];
	a=fopen("simple.txt","w");
	fputs("Hello World", a);
	fclose(a);
	a=fopen("simple.txt","r");
	fgets(fl,100,a);
	printf("%s", fl);
	fclose(a);
}
