/* Q. 52. Program to print
   1
  121
 12321
1234321
Author : Sohan */
#include <stdio.h>
int main()
{
	int r, a, b, c;
	for (r = 1; r <= 4; r++)
	{
		for (a = 1; a <= 4 - r; a++)
		{
			printf(" ");
		}
		for (b = 1; b <= r; b++)
		{
			printf("%d", b);
		}
		for (c = r - 1; c > 0; c--)
		{
			printf("%d", c);
		}
		printf("\n");
	}
	return 0;
}
