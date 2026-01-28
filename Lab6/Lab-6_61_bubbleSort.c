/* Q. 61. Program to sort an array using bubble sort
Author : Sohan */
#include <stdio.h>
int main()
{
	int i, pass, n, temp;
	printf("Enter dimension : ");
	scanf("%d", &n);
	int array[n];
	printf("Enter array elements : ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	for (pass = 1; pass <= n; pass++)
	{
		for (i = 0; i < (n - pass); i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
	printf("Sorted array = ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}