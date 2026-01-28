/* Q. 71. Program pivot element of a sorted and rotated array using binary search
Author : Sohan */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int array[5], pass, i, shift, temp, pivot_element;
	printf("Enter array elements : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &array[i]);
	}
	for (pass = 1; pass <= 5; pass++)
	{
		for (i = 0; i < (5 - pass); i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
	printf("Enter shift : ");
	scanf("%d", &shift);
	if (shift >= 5)
	{
		printf("Invalid shift");
		exit(1);
	}
	int temporary[shift];
	for (i = 0; i < shift; i++)
	{
		temporary[i] = array[i];
	}
	for (i = shift; i < 5; i++)
	{
		array[i - shift] = array[i];
	}
	for (i = 0; i < shift; i++) 
	{
		array[5 - shift + i] = temporary[i];
	}
	for (i = 1; i < 5; i++)
	{
		if (array[i] < array[i - 1])
		{
			pivot_element = array[i];
		}
	}
	printf("Sorted and rotated array = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\nPivot element = %d", pivot_element);
	return 0;
}
