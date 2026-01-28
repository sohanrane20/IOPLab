/* Q. 34. Program to print fibonacci series
Author : Sohan */
#include <stdio.h>
int main() 
{
	int n, i, a, b, c;
	printf("Enter n : ");
	scanf("%d", &n);
	a = 0;
	b = 1;
	printf("%d, %d, ", a, b);
	for (i = 2; i < n; i++) 
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d, ", c);
	}
	return 0;
}