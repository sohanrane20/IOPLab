/* Q. 44. Program to calculate electricity charges
Author : Sohan */
#include <stdio.h>
int main() 
{
	int unit;
	float charge;
	printf("Enter units consumed : ");
	scanf("%d", &unit);
	if (unit <= 200) 
	{
		charge = unit * 0.5;
	}
	else 
	{
		if (unit <= 400)
		{
			charge = 100 + ((unit - 200) * 0.65);
		}
		else 
		{
			if (unit <= 600)
			{
				charge = 230 + ((unit - 400) * 0.80);
			}
			else 
			{
				charge = 425 + ((unit - 600) * 1.25);
			}
		}
	}
	printf("Amount = %f", charge);
	return 0;
}