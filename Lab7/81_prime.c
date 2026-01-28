/* 81. FUNCTION THAT RETURNS 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURNS ZERO OTHERWISE
Author : Sohan */
#include <stdio.h>
int primeOrNot(int);
int main()
{
	int num, prime;
	printf("Enter a number : ");
	scanf("%d", &num);
	prime = primeOrNot(num);
	if (prime == 1)
	{
		printf("%d is prime", num);
	}
	else 
	{
		printf("%d is not prime", num);
	}
	return 0;
}
int primeOrNot(int num)
{
	int i = 2, flag = 1;
	for (; i <= num - 1 && flag == 1;)
	{
		if (num % i++ == 0)
		{
			flag = 0;
		}
	}
	return flag;
}
