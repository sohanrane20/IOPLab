/* Q. 38. Program to print 1 + 4 + 9 + 16 + 25 + ...
Author : Sohan */
#include <stdio.h>
int main() 
{
	int n, i, sum = 0;
	printf("Enter n : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) 
	{
		sum = sum + i * i;
	}
	printf("Sum = %d", sum);
	return 0;
}