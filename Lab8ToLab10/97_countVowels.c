/* Q. 97. Program to count vowels in given string
Author : Sohan */
#include <stdio.h>
#include <string.h>
int countVowel(char *);
int main() 
{
	char string[80];
	printf("Enter a string : ");
	gets(string);
	printf("Number of vowels = %d", countVowel(string));
	return 0;
}
int countVowel(char *pointer) 
{
	int count = 0;
	while (*pointer != '\0')
	{
		if (*pointer >= 65 && *pointer <= 90)
			*pointer = *pointer + 32;
		switch (*pointer)
		{
			case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
				count++;
		}
		pointer++;
	}
	return count;
}
