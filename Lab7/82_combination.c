/* Q. 82. FUNCTION TO CALCULATE (NCR) OF A GIVEN NUMBERS
Author : Sohan */
#include <stdio.h>
int factorial(int);
int main()
{
	int n, r;
	for(;;)
	{
		printf("Enter n : ");
		scanf("%d", &n);
		if (n > 0)
		{
			break;
		}
	}
	for(;;)
	{
		printf("Enter r : ");
		scanf("%d", &r);
		if (r >= 0 && r <= n)
		{
			break;
		}
	}
	printf("%dC%d = %f", n, r, ((float) factorial(n)) / (factorial(n - r) * factorial(r)));
	return 0;
}
int factorial(int number)
{
	int i, fact = 1;
	for (i = 1; i <= number; i++)
	{
		fact = fact * i;
	}
	return fact;
}