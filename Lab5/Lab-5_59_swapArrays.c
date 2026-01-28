/* Q. 59. Program to READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES OF THESE ARRAYS
Author : Sohan */
#include <stdio.h>
int main()
{
	int array1[10], array2[10], array3[10], i, temp;
	printf("Enter 10 integers of first array : ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &array1[i]);
	}
	printf("Enter 10 integers of second array : ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &array2[i]);
	}
	printf("Before swapping = \nFirst array elements = \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array1[i]);
	}
	printf("\nSecond array elements = \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array2[i]);
	}
	for (i = 0; i < 10; i++)
	{
		temp = array1[i];
		array1[i] = array2[i];
		array2[i] = temp;
	}
	printf("\nAfter swapping = \nFirst array elements = \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array1[i]);
	}
	printf("\nSecond array elements = \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array2[i]);
	}
	return 0;
}