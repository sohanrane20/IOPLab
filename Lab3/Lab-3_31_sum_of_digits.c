/* Q. 31. Program to print sum of indivisual digits of a number
Author : Sohan */
#include <stdio.h>
int main() 
{
	int number, digit, sum = 0;
	printf("Enter a number : ");
	scanf("%d", &number);
	while (number > 0) 
	{
		digit = number % 10;
		number = number / 10;
		sum = sum + digit;
	}
	printf("Sum of indivisual digits = %d", sum);
	return 0;
}