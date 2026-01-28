/* Q. 78. FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT
Author : Sohan */
#include <stdio.h>
#include <math.h>
void armstrong(int);
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	armstrong(num);
	return 0;
}
void armstrong(int num)
{
	int n, k = 0, sum = 0;
	n = num;
	while (n > 0)
	{
		n = n / 10;
		k = k + 1;
	}
	n = num;
	while (n > 0)
	{
		sum = sum + pow(n % 10, k);
		n = n / 10;
	}
	if (num == sum)
	{
		printf("%d is armstrong", num);
	}
	else
	{
		printf("%d is not armstrong", num);
	}
}