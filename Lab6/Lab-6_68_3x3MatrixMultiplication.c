/* Q. 68. Program to READ TWO 3 * 3 MATRICES AND MULTIPLY THEIR VALUES AND STORE THEM IN 
THIRD MATRIX
Author : Sohan */
#include <stdio.h>
int main()
{
	int A[3][3], B[3][3], C[3][3], r, c, i, j, k;
	printf("Enter 1st 3 X 3 matrix elements : ");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			scanf("%d", &A[r][c]);
		}
	}
	printf("Enter 2nd 3 X 3 matrix elements : ");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			scanf("%d", &B[r][c]);
		}
	}
	printf("1st 3 X 3 matrix = \n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%d ", A[r][c]);
		}
		printf("\n");
	}
	printf("2nd 3 X 3 matrix = \n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%d ", B[r][c]);
		}
		printf("\n");
	}
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			C[r][c] = 0;
			for (k = 0; k < 3; k++)
			{
				C[r][c] = C[r][c] + (A[r][k] * B[k][c]);
			}
		}
	}
	printf("Multiplication of 1st and 2nd 3 X 3 matrix = \n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%d ", C[r][c]);
		}
		printf("\n");
	}
	return 0;
}