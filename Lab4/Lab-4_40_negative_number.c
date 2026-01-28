/* Q. 40. Program to read numbers till a negative number is entered and calculate their sum
Author : Sohan */
#include <stdio.h>
int main() 
{
	int no, sum = 0, flag = 0;
	printf("Enter numbers : ");
	for (; flag == 0;) {
		scanf("%d", &no);
		if (no > 0) {
			sum = sum + no;
	    }
		else {
			flag = 1;
		}
	}
	printf("Sum = %d", sum);
	return 0;
}