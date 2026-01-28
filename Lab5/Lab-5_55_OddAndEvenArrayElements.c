/* Q. 55. Program to READ AN ARRAY OF 10 INTEGERS AND COUNT TOTAL NO OF ODD AND
TOTAL NO. OF EVEN ELEMENTS
Author : Sohan */
#include <stdio.h>
int main()
{
	int arr[10], even = 0, odd = 0, i;
	printf("Enter 10 integers : ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 0) 
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("Total number of odd elements = %d\n", odd);
	printf("Total number of even elements = %d\n", even);
	return 0;
}
