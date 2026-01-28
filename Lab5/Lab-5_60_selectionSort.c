/* Q. 60. Program to sort an array using selection sort
Author : Sohan */
#include <stdio.h>
int main()
{
	int i, j, n, min, temp;
	printf("Enter dimension : ");
	scanf("%d", &n);
	int array[n];
	printf("Enter array elements : ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	/* for (i = 0; i < n; i++)
	{
		min = i;
		for (j = i; j < n; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
			}
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	} */
	for (i = 0; i < n; i++) 
	{
		for (j = i + 1; j < n; j++) {
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp; 
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