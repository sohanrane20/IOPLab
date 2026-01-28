/* Q. 37. Program to print 2 + 4 + 6 + 8 + 10 + ... + n
Author : Sohan */
#include <stdio.h>
int main() 
{
	int n, i, sum = 0;
	printf("Enter n : ");
	scanf("%d", &n);
	for(i = 2; i <= n; i += 2) 
	{
		sum = sum + i;
	}
	printf("Sum = %d", sum);
	return 0;
}