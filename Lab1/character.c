/* Program to check whether a given character is capital letter, small case letter, digit or special symbol
Author : Sohan */
#include <stdio.h>
int main() 
{
	char character;
	int ascii_code;
	printf("Enter a character : ");
	scanf("%c", &character);
	ascii_code = (int) character;
	if (ascii_code >= 65 && ascii_code <= 90) 
	{
		printf("Capital letter");
	}
	else if (ascii_code >= 97 && ascii_code <= 122) 
	{
		printf("Small case letter");
	}
	else if (ascii_code >= 48 && ascii_code <= 57) 
	{
		printf("Digit");
	}
	else 
	{
		printf("Special symbol");
	}
	return 0;
}