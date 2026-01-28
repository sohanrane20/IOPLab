/* Q. 20. Program to make a simple calculator using switch case
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