/* Q. 74.  Program to sort two arrays A and B and then merge them into array C and then sort C
Author : Sohan */
#include <stdio.h>
int main()
{
	int A[5], B[5], C[10], i, pass, temp;
	printf("Enter array A elements : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &A[i]);
	}
	printf("Enter array B elements : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &B[i]);
	}
	for (pass = 1; pass <= 5; pass++)
	{
		for (i = 0; i < (5 - pass); i++)
		{
			if (A[i] > A[i + 1])
			{
				temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = temp;
			}
			if (B[i] > B[i + 1])
			{
				temp = B[i];
				B[i] = B[i + 1];
				B[i + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			C[i] = A[i];
		}
		else
		{
			C[i] = B[i - 5];
		}
	}
	for (pass = 1; pass <= 10; pass++)
	{
		for (i = 0; i < (10 - pass); i++)
		{
			if (C[i] > C[i + 1])
			{
				temp = C[i];
				C[i] = C[i + 1];
				C[i + 1] = temp;
			}
		}
	}
	printf("Sorted array A = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\nSorted array B = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", B[i]);
	}
	printf("\nSorted array C = ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", C[i]);
	}
	return 0;
}