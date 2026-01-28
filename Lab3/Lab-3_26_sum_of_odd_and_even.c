/* Q. 16. Program to print sum of all odd and even numbers between 1 and n
Author : Sohan */
#include <stdio.h>
int main() 
{
	int n, i, odd = 0, even = 0;
	printf("Enter a number : ");
	scanf("%d", &n);
	for (i = 1; i < n; i = i + 2) 
	{
		odd = odd + i;
	}
	for (i = 0; i < n; i = i + 2) 
	{
		even = even + i;
	}
	printf("Sum of all odd numbers = %d\n", odd);
	printf("Sum of all even numbers = %d", even);
	return 0;
}