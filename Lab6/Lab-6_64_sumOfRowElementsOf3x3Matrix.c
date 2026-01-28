/* Q. 64. Program to READ A 3 * 3 MATRIX AND PRINT SUM OF ALL ROWS
Author : Sohan */
#include <stdio.h>
int main()
{
	int matrix[3][3], sum, r, c;
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
	for (r = 0; r < 3; r ++)
	{
		sum = 0;
		for (c = 0; c < 3; c++)
		{
			sum = sum + matrix[r][c];
		}
		printf("Sum of %dth row elements = %d\n", r + 1, sum);
	}
	return 0;
}