/* Q. 109. Program to modify value stored in a variable using pointer
Author : Sohan */
#include <stdio.h>
int main() {
	float temperature = 37.5, *pointer;
	pointer = &temperature;
	printf("Value of variable before modification = %f\n", temperature);
	*pointer = 38.4;
	printf("Value of variable after modification = %f\n", temperature);
	return 0;
}
