/* Q. 103. Program to define a macro to find greater of two numbers
Author : Sohan */
#include <stdio.h>
#define max(a, b) ((a > b) ? a : b)
int main()
{
	int a, b;
	printf("Enter a : ");
	scanf("%d", &a);
	printf("Enter b : ");
	scanf("%d", &b);
	printf("Max = %d", max(a, b));
	return 0;
}
