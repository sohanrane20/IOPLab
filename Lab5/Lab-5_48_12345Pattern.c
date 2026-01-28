/* Program to print
    1
   12
  123
 1234
12345
Author : Sohan */
#include <stdio.h>
int main()
{
	int a, b;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5 - a; b++)
		{
			printf(" ");
		}
		for (b = 1; b <= a; b++)
		{
			printf("%d", b);
		}
		printf("\n");
	}
	return 0;
}
