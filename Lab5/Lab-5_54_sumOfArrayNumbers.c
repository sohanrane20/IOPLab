/* Q. 54. Program TO READ AN ARRAY OF 10 INTEGERS AND PRINT SUM OF NUMBERS
Author : Sohan */
#include <stdio.h>
int main()
{
	int arr[10], sum = 0, i;
	printf("Enter 10 integers : ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}
	printf("Sum = %d", sum);
	return 0;
}
