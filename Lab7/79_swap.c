/* Q. 79. FUNCTION TO INTERCHANGE THE VALUES OF TWO VARIABLES, SAY X AND Y 
Author : Sohan */
#include <stdio.h>
void exchange(int *, int *);
int main()
{
	int a, b;
	printf("Enter a : ");
	scanf("%d", &a);
	printf("Enter b : ");
	scanf("%d", &b);
	printf("Before swapping : \na = %d \nb = %d\n", a, b);
	exchange(&a, &b);
	printf("After swapping : \na = %d \nb = %d\n", a, b);
	return 0;
}
void exchange(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
