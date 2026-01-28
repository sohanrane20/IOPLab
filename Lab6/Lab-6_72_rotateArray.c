/* Q. 72. Program to rotate an array by n positions
Author : Sohan */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int dimension, i, j, n, temp;
	printf("Enter dimension : ");
	scanf("%d", &dimension);
	if (dimension <= 0)
	{
		printf("Invalid dimension");
		exit(1);
	}
	int array[dimension];
	printf("Enter array elements : ");
	for (i = 0; i < dimension; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("Enter shift : ");
	scanf("%d", &n);
	if (n > dimension)
	{
		printf("Invalid shift");
		exit(1);
	}
	int temporary[n];
	for (i = 0; i < n; i++)
	{
		temporary[i] = array[i];
	}
	for (i = n; i < dimension; i++)
	{
		array[i - n] = array[i];
	}
	for (i = 0; i < n; i++) 
	{
		array[dimension - n + i] = temporary[i];
	} 
	printf("Rotated array = ");
	for (i = 0; i < dimension; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}
