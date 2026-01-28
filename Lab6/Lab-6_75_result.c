/* Q. 75. Program to tabulate the results of 10 students
Author : Sohan */
#include <stdio.h>
int main()
{
	int n = 10, result[n][5], r, c, max;
	for (r = 0; r < n; r++)
	{
		for (c = 0; c < 4; c++)
		{
			if (c == 0)
			{
					printf("Enter roll number : ");
			}
			else
			{
					printf("Enter subject %d marks : ", c);
			}
			scanf("%d", &result[r][c]);
		}
	}
	for (r = 0; r < n; r++)
	{
		for (c = 0; c < 4; c++)
		{
			if (c == 0)
			{
					printf("Roll number = ");
			}
			else
			{
					printf("Subject %d marks = ", c);
			}
			printf("%d, ", result[r][c]);
		}
		printf("\n");
	}
	for (r = 0; r < n; r++)
	{
		result[r][4] = 0;
		for (c = 1; c < 4; c++)
		{
			result[r][4] = result[r][4] + result[r][c];
		}
		printf("Roll number = %d, Total marks = %d\n", result[r][0], result[r][4]);
	}
	for (c = 1; c < 5; c++)
	{
		max = 0;
		for (r = 0; r < n; r++)
		{
			if (result[max][c] < result[r][c])
			{
				max = r;
			}
		}
	}
	printf("Highest total marks = %d are scored by roll number = %d\n", result[max][4], result[max][0]);
	printf("Highest subject 1 marks = %d are scored by roll number = %d\n", result[max][1], result[max][0]);
	printf("Highest subject 2 marks = %d are scored by roll number = %d\n", result[max][2], result[max][0]);
	printf("Highest subject 3 marks = %d are scored by roll number = %d\n", result[max][3], result[max][0]);
	return 0;
}