/* Q. 33. Program to find out maximum and minimum from n numbers
Author : Sohan */
#include <stdio.h>
int main() 
{
	int n, number[n], i, maximum, minimum;
	printf("Enter n : ");
	scanf("%d", &n);
	printf("Enter %d numbers : ", n);
	for (i = 0; i < n; i++) 
	{
		scanf("%d", &number[i]);
	}
	maximum = number[0];
	minimum = number[0];
	for (i = 0; i < n; i++) 
	{
		if (number[i] > maximum) 
		{
			maximum = number[i];
		}
		if (number[i] < minimum) 
		{
			minimum = number[i];
		}
	}
	printf("Maximum = %d\n", maximum);
	printf("Minimum = %d\n", minimum);
	return 0;
}