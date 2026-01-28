/* Program to check whether a number is even or odd
Author : Sohan */
#include <stdio.h>
int main() 
{
	int number;
	printf("Enter a number : ");
	scanf("%d", &number);
	if (number % 2 == 0) 
	{
		printf("Even number");
	}
	else 
	{
		printf("Odd number");
	}
	return 0;
}