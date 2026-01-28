/* Q. 62. Program to reverse an array 
Author : Sohan */
#include <stdio.h>
int main()
{
	int array[10], i, temp;
	printf("Enter 10 integers : ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("Before reversing = \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	for (i = 0; i < 10; i++)
	{
		temp = array[i];
		array[i] = array[9 - i];
		array[9 - i] = temp;
	}
	printf("\nAfter reversing = \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}