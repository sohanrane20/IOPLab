/* Program to convert fahrenheit to centigrade
Author : Sohan */
#include <stdio.h>
int main() 
{
	float fahrenheit, centigrade;
	printf("Enter Fahrenheit : ");
	scanf("%f", &fahrenheit);
	centigrade = (5.0 / 9) * (fahrenheit - 32);
	printf("Centigrade = %f", centigrade);
	return 0;
}