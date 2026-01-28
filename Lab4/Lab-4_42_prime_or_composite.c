/* Q. 42. Program to check whether a number is prime or composite
Author : Sohan */
#include <stdio.h>
int main() 
{
	int number, i, flag = 1;
	printf("Enter a number: ");
	scanf("%d", &number);
	for (i = 2; i <= number / 2 && flag == 1; i++) 
	{
		if (number % i == 0) 
		{
			flag = 0;
		}
	}
	if (flag == 1) 
	{
		printf("Prime number");
	}
	else 
	{
		printf("Composite number");
	}
	return 0;
}