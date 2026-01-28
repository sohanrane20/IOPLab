/* Q. 93. Program to count number of words in a given string 
Author : Sohan */
#include <stdio.h>
#include <string.h>
int main()
{
	int count = 0;
	char string[100];
	printf("Enter a string : ");
	gets(string);
	int i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == ' ' && string[i + 1] != ' ')
		{
			count++;
		}	
		i++;
	}
	count++;
	printf("Number of words = %d", count);
	return 0;
}
