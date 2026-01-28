/* Q. 23. Program to calculate power of a number
Author : Sohan */
#include <stdio.h>
int main() 
{
	int base, exponent, power = 1, i;
	printf("Enter base : ");
	scanf("%d", &base);
	printf("Enter exponent : ");
	scanf("%d", &exponent);
	for (i = 0; i < exponent; i++) {
		power = power * base;
	}
	printf("Power = %d", power);
	return 0;
}