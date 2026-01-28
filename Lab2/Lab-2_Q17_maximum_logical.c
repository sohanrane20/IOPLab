/* Q. 17. Program to print maximum of three numbers using logical operator (&&)
Author : Sohan */
#include <stdio.h>
int main() 
{
	int a, b, c;
	printf("Enter three numbers : ");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b && a > c) 
	{
		printf("Maximum = %d", a);
	}
    else if (b > a && b > c) 
    {
		printf("Maximum = %d", b);
	}
	else 
	{
		printf("Maximum = %d", c);
	}
	return 0;
}