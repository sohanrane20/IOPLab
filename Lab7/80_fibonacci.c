/* Q. 80. FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUMBERS. TEST THE FUNCTION FOR N = 5, 10 AND 15
Author : Sohan */
#include <stdio.h>
void fibonacci(int);
int main()
{
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	fibonacci(n);
	return 0;
}
void fibonacci(int n)
{
	int a = 0, b = 1, c, i = 0;
	for (; i < n; i++)
	{
		printf("%d ", a);
		c = a + b;
		a = b;
		b = c;
	}
}