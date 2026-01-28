/* Q. 41. Program to print factors of a number
Author : Sohan */
#include <stdio.h>
int main() 
{
	int n, i;
	printf("Enter n : ");
	scanf("%d", &n);
	printf("Factors = ");
	for (i = 1; i <= n; i++) 
	{
		if (n % i == 0) 
		{
			printf("%d, ", n / i);
		}
	}
	return 0;
}