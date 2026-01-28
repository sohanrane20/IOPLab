/* Q. 90. Program to find length of a given string including and excluding spaces
Author: Sohan */
#include <stdio.h>
int lengthOfString(char *);
int lengthOfStringExcludingSpace(char *);
int main()
{
	char string[100];
	printf("Enter a string: ");
	gets(string);
	printf("Length of string including spaces = %d\n", lengthOfString(string));
	printf("Length of string excluding spaces = %d\n", lengthOfStringExcludingSpace(string));
	return 0;
}
int lengthOfString(char *pointer) 
{
	int length = 0;
	while (*(pointer++) != '\0')
	{
		length++;
	}
	return length;
}
int lengthOfStringExcludingSpace(char *pointer) 
{
	int length = 0;
	while (*pointer != '\0')
	{
		if (*(pointer++) == ' ')
		{
			continue;
		}
		length++;
	}
	return length;
}
