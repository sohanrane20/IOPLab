/* Q. 36. Program to print 1 + 3 + 5 + 7 + 9 + ...
Author : Sohan */
#include <stdio.h>
int main() 
{
	int n, i, sum = 0;
	printf("Enter n : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i += 2) 
	{
		sum = sum + i;
	}
	printf("Sum = %d", sum);
	return 0;
}