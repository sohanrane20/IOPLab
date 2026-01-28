/* Q. 94. Program to copy string into another in reverse using pointers 
Author : Sohan */
#include <stdio.h>
#include <string.h>
void copyStringInReverse(char *, char *, int);
int main()
{
	char string[100], reverse[100];
	int i;
	printf("Enter a string : ");
	gets(string);
	copyStringInReverse(reverse, string, strlen(string));
	printf("Reverse of string = %s", reverse);
	return 0;
}
void copyStringInReverse(char *reverse, char *string, int length) 
{
	int i;
	for (i = length - 1; i >= 0; i--)
	{
		*(reverse + length - 1 - i) = *(string + i);
	}
}
