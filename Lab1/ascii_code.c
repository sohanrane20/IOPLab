/* Program to print ASCII code of a character
Author : Sohan */
#include <stdio.h>
int main() 
{
	char character;
	printf("Enter any character : ");
	scanf("%c", &character);
	printf("ASCII code = %d", character);
	// printf("ASCII code = %d", ( int ) character);
	return 0;
}