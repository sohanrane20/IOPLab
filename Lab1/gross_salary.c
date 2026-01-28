/* Program to calculate gross salary
Author : Sohan */
#include <stdio.h>
int main() 
{
	int basic, house_rent, transport, bonus, gross;
	printf("Enter basic salary : ");
	scanf("%d", &basic);
	printf("Enter house rent allowance : ");
	scanf("%d", &house_rent);
	printf("Enter transport allowance : ");
	scanf("%d", &transport);
	printf("Enter statutory bonus : ");
	scanf("%d", &bonus);
	gross = basic + house_rent + transport + bonus;
	printf("Gross Salary = %d", gross);
	return 0;
}