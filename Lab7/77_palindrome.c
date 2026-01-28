/* Q. 77. FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT
Author : Sohan */
#include <conio.h>
void palindrome(int);
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	palindrome(n);
	return 0;
}
void palindrome(int n)
{
	int rev = 0, num;
	num = n;
	while (num > 0)
	{
		rev = rev * 10 + num % 10;
		num = num / 10;
	}
	if (n == rev)
	{
		printf("%d is palindrome", n);
	}
	else 
	{
		printf("%d is not palindrome", n);
	}
}