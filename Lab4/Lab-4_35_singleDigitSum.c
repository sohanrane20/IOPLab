/* Q. 35. Program to READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGITS OF N
Author : Sohan */
#include <stdio.h>
int main()
{
	int n, sum;
	printf("Enter a number : ");
	scanf("%d", &n);
	while (n > 10)
	{
		sum = 0;
		while (n > 0)
		{
			sum = sum + n % 10;
			n = n / 10;
		}
		n = sum;
	}
	printf("Single digit sum = %d", n);
	return 0;
}