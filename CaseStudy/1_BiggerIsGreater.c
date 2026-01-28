/* Q. 1. Program to rearrange the letters of word w to construct another word s in such a way that, s is lexicographically greater than w
Author : Sohan */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
	int t, i, a, b;
	char w[100], s[100], temp;
	printf("Enter number of test cases : ");
	scanf("%d", &t);
	if (t < 1 || t > pow(10, 5))
	{
		printf("Invalid number of test cases\n");
		exit(1);
	}
	do 
	{
		printf("Enter word : ");
		scanf("%s", w);
		for (i = 0; i < strlen(w); i++)
		{
			if (w[i] < 'a' || w[i] > 'z')
			{
				printf("Word can contain only lowercase english letters\n");
				exit(1);
			}
		}
		strcpy(s, w);
		for (i = strlen(s) - 1; i > 0; i--)
		{
			if (s[i] > s[i - 1])
			{
				break;
			}
		}
		if (i == 0)
		{
			printf("no answer\n");
			continue;
		}
		for (a = strlen(s) - 1; a >= i; a--)
		{
			if (s[a] > s[i - 1]) 
			{
				temp = s[a];
				s[a] = s[i - 1];
				s[i - 1] = temp;
				break;
			}
		}
		for (a = i; a < strlen(s); a++)
		{
			for (b = a + 1; b < strlen(s); b++)
			{
				if (s[a] > s[b])
				{
					temp = s[a];
					s[a] = s[b];
					s[b] = temp;
				}
			}
		}
		printf("%s\n", s);
	} while (--t >= 1);
	return 0;
}