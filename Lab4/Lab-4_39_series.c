/* Q. 39. Program to print 1 / 1! + 2 / 2! + 3 / 3! + 4 / 4! + ... + n / n!
Author : Sohan */
#include <stdio.h>
int main() 
{
	int n, i, factorial = 1;
	float sum = 0;
	printf("Enter n : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) 
	{
		factorial = factorial * i;
		sum = sum + (float) i / factorial;
	}
	printf("%f", sum);
	return 0;
}
