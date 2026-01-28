/* Q. 83. FUNCTION TO READ AN ARRAY AND FIND OUT MAXIMUM
Author : Sohan */
#include <stdio.h>
int maxOfArray(int [], int);
int main()
{
	int n, i = 0;
	printf("Enter n : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter %d integers : ", n);
	for (; i < n;)
	{
		scanf("%d", &arr[i++]);
	}
	printf("Max of array = %d", maxOfArray(arr, n));
	return 0;
}
int maxOfArray(int arr[], int n)
{
	int max = arr[0], i = 0;
	for (; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}