/* Q. 58. Program to READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDITION OF THOSE ARRAYS INTO THIRD
Author : Sohan */
#include <stdio.h>
int main()
{
	int array1[10], array2[10], array3[10], i;
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
	printf("Addition of first array and second array = ");
	for (i = 0; i < 10; i++)
	{
		array3[i] = array1[i] + array2[i];
		printf("%d ", array3[i]);
	}
	return 0;
}