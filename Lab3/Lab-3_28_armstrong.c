/* Q. 28. Program to check whether a number is armstrong or not
Author : Sohan */
#include <stdio.h>
#include <math.h>
int main() 
{
	int number, n, count = 0, digit, sum = 0;
	printf("Enter a number : ");
	scanf("%d", &number);
	n = number;
	while (n > 0) 
	{
		n = n / 10;
		count = count + 1;
	}
	n = number;
	while (n > 0) 
	{
		digit = n % 10;
		n = n / 10;
		sum = sum + pow(digit, count);
	}
	if (number == sum) 
	{
		printf("Armstrong number");
	}
	else 
	{
		printf("Not an armstrong number");
	}
	return 0;
}