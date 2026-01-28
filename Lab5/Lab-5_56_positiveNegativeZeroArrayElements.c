/* Q. 56. Program to READ AN ARRAY OF 10 INTEGERS AND COUNT TOTAL NO. OF POSITIVE, NEGATIVE AND ZERO ELEMENTS
Author : Sohan */
#include <stdio.h>
int main()
{
	int array[10], positive = 0, negative = 0, zero = 0, i;
	printf("Enter 10 integers : ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);
		if (array[i] == 0)
		{
			zero = zero + 1;
		}
		else if (array[i] > 0)
		{
			positive = positive + 1;
		}
		else
		{
			negative = negative + 1;
		}
	}
	printf("Number of zero array elements = %d\n", zero);
	printf("Number of positive array elements = %d\n", positive);
	printf("Number of negative array elements = %d\n", negative);
	return 0;
}
