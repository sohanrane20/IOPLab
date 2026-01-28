/* Program to perform aritmetic operation using switch case with case of char type
Author : Sohan */
#include <stdio.h>
int main() 
{
	float a, b;
	char operator;
	printf("Enter operator : ");
	scanf("%c", &operator);
	printf("Enter first number : ");
	scanf("%f", &a);
	printf("Enter second number : ");
	scanf("%f", &b);
	switch (operator) 
	{
		case '+' :
			printf("%f", a + b);
			break;
		case '-' : 
			printf("%f", a - b);
			break;
		case '*' :
			printf("%f", a * b);
			break;
		case '/' :
			printf("%f", a / b);
			break;
		default :
			printf("Not a valid operator");
	}
	return 0;
}