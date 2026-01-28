/* Q. 76. FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD
Author : Sohan */
#include <stdio.h>
void evenOrOdd(int);
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	evenOrOdd(n);
	return 0;
}
void evenOrOdd(int n)
{
	if (n % 2 == 0)
	{
		printf("%d is even", n);
	}
	else 
	{
		printf("%d is odd", n);
	}
}