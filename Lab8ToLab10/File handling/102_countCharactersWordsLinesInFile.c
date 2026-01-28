/*
102. Program to count characters, words and lines in text in file
Author: Sohan 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i, count=0, word=0, line=0;
	char chr, text[40];
	FILE *fptr;
	fptr=fopen("vowels.txt", "r");
	if(fptr==NULL)
	{
		printf("Cannot open file\n");
		exit(1);
	}
	while((chr=fgetc(fptr))!=EOF)
	{
		putchar(chr);
	}
	rewind(fptr);
	while((chr=fgetc(fptr))!=EOF)
	{
		switch(chr)
		{
			case ' ': case '.': case ',': case '\n': case '\t':
				word++;
			default:
				count++;	
		}
	}
	rewind(fptr);
	while(fgets(text,sizeof(text),fptr))
	{
		line++;
	}
	printf("Number of characters in text=%d\n", count);
	printf("Number of words in text=%d\n", word);
	printf("Number of lines in text=%d\n", line);
	fclose(fptr);
	return 0;
}
