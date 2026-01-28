/* Q. 92. Program to find the biggest integer in the given list of n integers using pointers
Author: Sohan */
#include <stdio.h>
void readList(int *, int);
int biggestInteger(int *, int);
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int list[n];
	readList(list, n);
	printf("Maximum of list = %d", biggestInteger(list, n));
	return 0;
}
void readList(int *pointer, int dimension) 
{
	int i;
	for (i = 0; i < dimension; i++)
	{
		scanf("%d", pointer + i);
	}
}
int biggestInteger(int *pointer, int dimension) 
{
	int i, maximum = *pointer;
	for (i = 0; i < dimension; i++)
	{
		if (*pointer > maximum)
		{
			maximum = *pointer;
		}
		pointer++;
	}
	return maximum;
}
