/* Q. 22. Program to calculate factorial of a number
Author : Sohan */
#include <stdio.h>
int main() 
{
	int number, factorial = 1, i;
	printf("Enter a number : ");
	scanf("%d", &number);
	for (i = 1; i < number + 1; i++) 
	{
		factorial = factorial * i;
	}
	printf("Factorial = %d", factorial);
	return 0;
}