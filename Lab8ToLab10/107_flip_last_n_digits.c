/* Q. 107. FUNCTION NAMED AS FLIP WHICH TAKES A NUMBER AS INPUT AND FLIPS ITS LAST N DIGITS
Author : Sohan */
#include <stdio.h>
#include <math.h>
int flip(int, int);
int main() {
	int number, n;
	printf("Enter number : ");
	scanf("%d", &number);
	printf("Enter number of digits you want to flip from last : ");
	scanf("%d", &n);
	printf("%d", flip(number, n));
	return 0;
}
int flip(int number, int n) {
	int i, reverse = 0;
	for (i = 1; i <= n; i++) {
		reverse = reverse * 10 + number % 10;
	    number = number / 10;
	}
	number = number * pow(10, n) + reverse;
	return number;
}
