/* Q. 93. Program to count number of words in a given string using pointers
Author : Sohan */
#include <stdio.h>
#include <string.h>
int delimitter(char character);
int main()
{
	int count = 0;
	char string[100], *pointer;
	printf("Enter a string : ");
	gets(string);
	pointer = string;
	while (*pointer != '\0')
	{
		if (delimitter(*pointer) && !delimitter(*(pointer + 1)))
		{
			count++;
		}
		pointer++;
	}
	printf("Number of words = %d", count);
	return 0;
}
int delimitter(char character)
{
	switch (character)
	{
		case ' ':
		case '\t':
		case '.':
		case ',':
		case ';':
		case ':':
		case '!':
		case '?':
			return 1;
		default:
			return 0;
	}
}
