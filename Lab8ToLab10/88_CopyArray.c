/* Q. 88. Program to copy one array into another using pointers
Author: Sohan */
#include <stdio.h>
void readArray(int *);
void printArray(int *);
void copyArray(int *, int *);
int main()
{
	int array[5], copy[5];
	printf("Enter 5 integers: ");
	readArray(array);
	printf("Elements of array = ");
	printArray(array);
	copyArray(copy, array);
	printf("\nElements of copy of array = ");
	printArray(copy);
	return 0;
}
void readArray(int *pointer) 
{
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", pointer + i);
	}
}
void printArray(int *pointer) 
{
	int i;
	for (i = 0; i < 5; i++) 
	{
		printf("%d ", *(pointer + i));
	}
}
void copyArray(int *copy, int *array) 
{
	int i;
	for (i = 0; i < 5; i++) 
	{
		*(copy + i) = *(array + i);
	}
}
