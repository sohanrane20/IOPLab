/* Q. 25. Program to print table of any number
Author : Sohan */
#include <stdio.h>
int main() 
{
	int number, i;
	printf("Enter a number : ");
	scanf("%d", &number);
	for (i = 1; i <= 10; i++) 
	{
		printf("%d X %d = %d\n", number, i, number * i);
	}
	return 0;
}