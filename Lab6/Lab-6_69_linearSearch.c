/* Q. 69. Program to search item using linear search
Author : Sohan */
#include <stdio.h>
int main()
{
	int n, i, item, loc, flag = 0;
	printf("Enter dimension : ");
	scanf("%d", &n);
	int array[n];
	printf("Enter array elements : ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("Enter item : ");
	scanf("%d", &item);
	for (i = 0; i < n && flag == 0; i++)
	{
		if (array[i] == item)
		{
			loc = i;
			flag = 1;
		}
	}
	if (flag == 1)
	{
		printf("%d found at loc = %d", item, loc);
	}
	else
	{
		printf("%d not found", item);
	}
	return 0;
}