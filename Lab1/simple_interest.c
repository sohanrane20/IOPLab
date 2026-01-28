/* Program to calculate simple interest
Author : Sohan */
#include <stdio.h>
int main() 
{
	int principal, rate, time, interest;
	printf("Enter Principal : ");
	scanf("%d", &principal);
	printf("Enter Rate : ");
	scanf("%d", &rate);
	printf("Enter Time : ");
	scanf("%d", &time);
	interest = principal * rate * time / 100;
	printf("Simple Interest = %d", interest);
	return 0;
}