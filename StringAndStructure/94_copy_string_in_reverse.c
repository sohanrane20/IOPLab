/* Q. 94. Program to copy string into another in reverse
Author : Sohan */
#include <stdio.h>
#include <string.h>
void copyStringInReverse(char [], char [], int);
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
void copyStringInReverse(char reverse[], char string[], int length) 
{
	int i;
	int l = length - 1;
	for (i = l; i >= 0; i--)
	{
		reverse[l - i] = string[i];
	}
}
