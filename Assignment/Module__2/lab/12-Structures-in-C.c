/*
Structures in C.
Write a C program that defines a structure to store a student's details (name,
roll number, and marks). Use an array of structures to store details of 3
students and print them.
*/
#include<stdio.h>
#include<string.h>

struct students{
	char name[20];
	int roll,marks;
};


main(){
	int i;
	struct students s1[3];
	for(i=0;i<3;i++){
		printf("\nEnter Details of student %d\n", i+1);
		printf("\nEnter Name: ");
		scanf(" %[^\n]", s1[i].name);
		printf("\nEnter Roll Number: ");
		scanf("%d", &s1[i].roll);
		printf("\nEnter Marks: ");
		scanf("%d", &s1[i].marks);
	}
	printf("\nAll Students Details: ");
	printf("Name\tRoll\tMarks\n");
	for(i=0;i<3;i++){
		printf("\n%s", s1[i].name);
		printf("\t%d", s1[i].roll);
		printf("\t%d", s1[i].marks);
	}
}
