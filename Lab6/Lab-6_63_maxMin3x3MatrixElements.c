/* Q. 63. Program to READ A 3 * 3 MATRIX AND FIND OUT MAX AND MIN ELEMENT
Author : Sohan */
#include <stdio.h>
int main()
{
	int matrix[3][3], max, min, r, c;
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
	max = matrix[0][0];
	min = matrix[0][0];
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			if (matrix[r][c] > max)
			{
				max = matrix[r][c];
			}
			if (matrix[r][c] < min)
			{
				min = matrix[r][c];
			}
		}
	}
	printf("Max = %d \nMin = %d \n", max, min);
	return 0;
}