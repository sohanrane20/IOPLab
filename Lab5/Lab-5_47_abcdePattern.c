/* Q. 47. Program to print
A
AB
ABC
ABCD
ABCDE
Author : Sohan */
#include <stdio.h>
int main()
{
	char r, c;
	for (r = 'A'; r <= 'E'; r++)
	{
		for (c = 'A'; c <= r; c++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	return 0;
}