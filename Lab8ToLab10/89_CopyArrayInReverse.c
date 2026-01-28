/* Q. 89. Program to copy an array into another in reverse
Author: Sohan */
#include <stdio.h>
void readArray(int *);
void printArray(int *);
void copyArrayInReverse(int *, int *);
int main()
{
	int array[5], reverse[5];
	printf("Enter 5 integers: ");
	readArray(array);
	printf("Elements of array = ");
	printArray(array);
	copyArrayInReverse(reverse, array);
	printf("\nElements of copy of array in reverse = ");
	printArray(reverse);
	return 0;
}
void readArray(int *pointer) {
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
void copyArrayInReverse(int *reverse, int *array) 
{
	int i;
	for (i = 0; i < 5; i++) 
	{
		*(reverse + 4 - i) = *(array + i);
	}
}
