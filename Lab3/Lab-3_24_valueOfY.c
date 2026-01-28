/* Q. 24. Program to calculate value of y
Author : Sohan */
#include <stdio.h>
#include <math.h>
int main() 
{
	float n, x, y;
	printf("Enter n : ");
	scanf("%f", &n);
	printf("Enter x : ");
	scanf("%f", &x);
	if (n == 1) 
	{
		y = 1 + x;
	}
	else if (n > 1 && n < 3) 
	{
		if (n == 2)
		{
			y = 1 + x / n;
		}
		else
		{
			y = 1 + n * x;
		}
	}
	else if (n == 3) 
	{
		y = 1 + pow(x, n);
	}
	printf("y = %f", y);
	return 0;
}