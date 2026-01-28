/*
100. Program to write details of n students on file
Author: Sohan 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[30];
	int roll_no;
	float marks;
};
int main()
{
	int n, i;
	char str[40];
	FILE *fptr;
	fptr=fopen("LNMIITSTUDENT.java", "w+");
	if(fptr==NULL)
	{
		printf("Cannot open file");
		exit(1);
	}
	printf("Enter number of records: ");
	scanf("%d", &n);
	struct student record;
	for(i=1; i<=n; i++)
	{
		printf("Enter name: ");
		fflush(stdin);
		gets(record.name);
		printf("Enter roll number: ");
		scanf("%d", &record.roll_no);
		printf("Enter marks: ");
		scanf("%f", &record.marks);
		fprintf(fptr, "%s\t%d\t%f\n", record.name, record.roll_no, record.marks);
	}
	rewind(fptr);
	while(fgets(str, sizeof(str), fptr))
	{
		puts(str);
	}
	fclose(fptr);
	return 0;
}
