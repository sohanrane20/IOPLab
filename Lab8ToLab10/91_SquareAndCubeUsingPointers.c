/* Q. 91. Program to CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING POINTER OF THE VARIABLE CONTAINING THE ENTERED NUMBER
Author: Sohan */
#include <stdio.h>
int square(int *);
int cube(int *);
int main()
{
	int number;
	printf("Enter number: ");
	scanf("%d", &number);
	printf("Square of %d = %d\n", number, square(&number));
	printf("Cube of %d = %d\n", number, cube(&number));
	return 0;
}
int square(int *pointer)
{
	return (*pointer) * (*pointer);
}
int cube(int *pointer)
{
	return (*pointer) * (*pointer) * (*pointer);
}
