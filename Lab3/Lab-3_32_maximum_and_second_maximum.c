/* Q. 32. Program to find out maximum and second maximum from n numbers
Author : Sohan */
#include <stdio.h>
int main() 
{
	int n, number[n], i, j = 0, maximum, no[n - 1], second_maximum;
	printf("Enter n : ");
	scanf("%d", &n);
	printf("Enter %d numbers : ", n);
	for (i = 0; i < n; i++) 
	{
		scanf("%d", &number[i]);
	}
	maximum = number[0];
	for (i = 0; i < n; i++) 
	{
		if (number[i] > maximum) 
		{
			maximum = number[i];
		}
	}
	printf("Maximum = %d\n", maximum);
	for (i = 0; i < n; i++) 
	{
		if (number[i] == maximum) 
		{
			continue;
		}
		else 
		{
			no[j] = number[i];
			j = j + 1;
		}
	}
	second_maximum = no[0];
	for (i = 0; i < n - 1; i++) 
	{
		if (no[i] > second_maximum) 
		{
			second_maximum = no[i];
		}
	}
	printf("Second Maximum = %d\n", second_maximum);
	return 0;
}