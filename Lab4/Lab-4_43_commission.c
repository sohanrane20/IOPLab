/* Q. 43. Program to calculate commission on sales
Author : Sohan */
#include <stdio.h>
int main() 
{
	int sales, commission;
	printf("Enter sales : ");
	scanf("%d", &sales);
	if (sales <= 500) 
	{
		commission = sales * 5 / 100;
	}
	else if (sales > 500 && sales <= 2000) 
	{
		commission = 35 + ((sales - 500) * 10 / 100);
	}
	else if (sales > 2000 && sales <= 5000) 
	{
		commission = 185 + ((sales - 2000) * 12 / 100);
	}
	else 
	{
		commission = sales * 12.5 / 100;
	}
	printf("Commission = %d", commission);
	return 0;
}