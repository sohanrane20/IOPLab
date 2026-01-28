/* Q. 97. Program to count vowels in given string
Author : Sohan */
#include <stdio.h>
#include <string.h>
int countVowel(char []);
int main() 
{
	char string[80];
	printf("Enter a string : ");
	gets(string);
	printf("Number of vowels = %d", countVowel(string));
	return 0;
}
int countVowel(char string[]) 
{
	int count = 0;
	int i = 0;
	while (string[i] != '\0')
	{
		if (string[i] >= 65 && string[i] <= 90)
			string[i] = string[i] + 32;
		switch (string[i])
		{
			case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
				count++;
		}
		i++;
	}
	return count;
}
