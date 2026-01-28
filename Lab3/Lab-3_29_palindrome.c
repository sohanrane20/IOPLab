/* Q. 29. Program to check whether a number is palindrome or not
Author : Sohan */
#include <stdio.h>
int main() 
{
	int number, no, digit, reverse = 0;
	printf("Enter a number : ");
	scanf("%d", &number);
	no = number;
	while (no > 0) 
	{
		digit = no % 10;
		reverse = reverse * 10 + digit;
		no = no / 10;
	}
	if (number == reverse) 
	{
		printf("Palindrome number");
	}
	else 
	{
		printf("Not a palindrome number");
	}
	return 0;
}