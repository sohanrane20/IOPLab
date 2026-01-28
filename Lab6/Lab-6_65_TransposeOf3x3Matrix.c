/* Q. 65. Program to print transpose of a 3 X 3 matrix
Author : Sohan */
#include <stdio.h>
int main()
{
	int matrix[3][3], transpose[3][3], r, c;
	printf("Enter 3 X 3 matrix elements : ");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			scanf("%d", &matrix[r][c]);
		}
	}
	printf("3 X 3 matrix = \n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%d ", matrix[r][c]);
		}
		printf("\n");
	}
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			transpose[r][c] = matrix[c][r];
		}
	}
	printf("Transpose = \n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%d ", transpose[r][c]);
		}
		printf("\n");
	}
	return 0;
}