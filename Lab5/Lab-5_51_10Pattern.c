/* Program to print
10000
01000
00100
00010
00001
Author : Sohan */
#include <stdio.h>
int main()
{
	int r, c;
	for ( r = 1; r <= 5; r++ )
	{
		for ( c = 1; c <= 5; c++)
		{
			if (c == r)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
