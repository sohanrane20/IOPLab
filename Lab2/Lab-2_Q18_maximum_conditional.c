/* Q. 18. Program to print maximum of three numbers using conditional operator (?:)
Author : Sohan */
#include <stdio.h>
int main() 
{
	int a, b, c, greater, maximum;
	printf("Enter three numbers : ");
	scanf("%d%d%d", &a, &b, &c);
	greater = ((a > b) ? a : b);
	maximum = ((greater > c) ? greater : c);
	printf("Maximum = %d", maximum);
	return 0;
}