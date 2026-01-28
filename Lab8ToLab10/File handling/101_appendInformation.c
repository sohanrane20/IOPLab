/*
101. Program to add or append information to a file
Author: Sohan 
*/
#include<stdio.h>
#include<stdlib.h>
int main() 
{
	char text[80];
	FILE *fptr;
	fptr=fopen("LNMIITSTUDENT.dat", "a+");
	if(fptr==NULL)
	{
		printf("Cannot open file");
		exit(1);
	}
	printf("Enter text: ");
	gets(text);
	fputs(text, fptr);
	fprintf(fptr, "\n");
	rewind(fptr);
	while(fgets(text, sizeof(text), fptr))
	{
		puts(text);
	}
	fclose(fptr);
	return 0;
}
