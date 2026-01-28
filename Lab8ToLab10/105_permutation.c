/* Q. 105. Program to PRINT ALL PERMUTATIONS OF A GIVEN STRING 
Author : Sohan */
#include <stdio.h>
#include <string.h>
int main()
{
	int i, a, b, length;
	char string[80], temporary;
	printf("Enter a string : ");
	scanf("%s", string); 
	length = strlen(string);
	for (a = 0; a < length; a++)
	{
		for (b = a + 1; b < length; b++)
		{
			if (string[a] > string[b])
			{
				temporary = string[a];
				string[a] = string[b];
				string[b] = temporary;
			}
		}
	}
	while (1)
	{
		printf("%s ", string);
		for (i = length - 1; i > 0; i--) 
		{
			if (string[i] > string[i - 1]) 
			{
				break;
			}
		}
		if (i == 0) 
		{
			break;
		}
		for (a = length - 1; a >= i; a--) {
			if (string[a] > string[i - 1]) {
				temporary = string[a];
				string[a] = string[i - 1];
				string[i - 1] = temporary;
				break;
			}
		}
		for (a = i; a < length; a++)
		{
			for (b = a + 1; b < length; b++) 
			{
				if (string[a] > string[b])
				{
					temporary = string[a];
					string[a] = string[b];
					string[b] = temporary;
				}
			}
		}
	}
	return 0;
}
