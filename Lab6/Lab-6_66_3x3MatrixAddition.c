/* Q. 66. Program to READ TWO 3 * 3 MATRICES AND ADD THEIR VALUES AND STORE THEM IN THIRD MATRIX
Author : Sohan */
#include <stdio.h>
int main()
{
	int matrix1[3][3], matrix2[3][3], matrix3[3][3], r, c;
	printf("Enter 1st 3 X 3 matrix elements : ");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			scanf("%d", &matrix1[r][c]);
		}
	}
	printf("Enter 2nd 3 X 3 matrix elements : ");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			scanf("%d", &matrix2[r][c]);
		}
	}
	printf("1st 3 X 3 matrix = \n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%d ", matrix1[r][c]);
		}
		printf("\n");
	}
	printf("2nd 3 X 3 matrix = \n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%d ", matrix2[r][c]);
		}
		printf("\n");
	}
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			matrix3[r][c] = matrix1[r][c] + matrix2[r][c];
		}
	}
	printf("Addition of 1st and 2nd 3 X 3 matrices = \n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%d ", matrix3[r][c]);
		}
		printf("\n");
	}
	return 0;
}