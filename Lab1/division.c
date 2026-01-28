/* Program to read marks of five subjects and print division
Author : Sohan */
#include <stdio.h>
int main() 
{
	int english, physics, chemistry, math, cs, total, percentage;
	printf("Enter English marks: ");
	scanf("%d", &english);
	printf("Enter Physics marks: ");
	scanf("%d", &physics);
	printf("Enter Chemistry marks: ");
	scanf("%d", &chemistry);
	printf("Enter Mathematics marks: ");
	scanf("%d", &math);
	printf("Enter Computer Science marks: ");
	scanf("%d", &cs);
	total = english + physics + chemistry + math + cs;
	percentage = total * 100 / 500;
	printf("Total = %d\n", total);
	printf("Percentage = %d\n", percentage);
	if (percentage >= 50) 
	{
		if (percentage >= 60) 
		{
			printf("First division");
		}
		else 
		{
			printf("Second division");
		}
	}
	else 
	{ 
		if (percentage <= 40)
		{
			printf( "Fail" );
		}
		else
		{
			printf("Third division");
		}
	}
	return 0;
}