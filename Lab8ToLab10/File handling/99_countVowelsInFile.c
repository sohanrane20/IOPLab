/* 
99. Program to read contents of a file and count number of vowels in that text
Author: Sohan 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	
	int count;
	char chr;
	FILE *ptr;
	ptr=fopen("vowels.txt", "r");
	if(ptr==NULL)
	{
		printf("Cannot open file\n");
		exit(1);
	}
	while((chr=fgetc(ptr))!=EOF)
	{
		putchar(chr);
	}
	rewind(ptr);
	count=0;
	while((chr=fgetc(ptr))!=EOF)
	{
		if(chr>=65&&chr<=90)
		{
			chr=chr+32;
		}
		switch(chr)
		{
			case 'a': case'e': case'i': case 'o': case 'u':
				count++;
		}
	}
	printf("\nNumber of vowels in text=%d\n", count);
	fclose(ptr);
	return 0;
}
