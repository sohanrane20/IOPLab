/* Program to print
A
BB
CCC
DDDD
EEEEE
Author : Sohan */
#include <stdio.h>
int main()
{
	char r, c;
	for (r = 'A'; r <= 'E'; r++)
	{
		for (c = 'A'; c <= r; c++)
		{
			printf("%c", r);
		}
		printf("\n");
	}
	return 0;
}
