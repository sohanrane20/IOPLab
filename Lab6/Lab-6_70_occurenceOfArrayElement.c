/* Q. 70. Program to READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR ELEMENT IN THE ARRAY
Author : Sohan */
#include <stdio.h>
int main()
{
	int array[10], element, occurence, i;
	printf("Enter 10 integers : ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("Enter any array element : ");
	scanf("%d", &element);
	for (i = 0; i < 10; i++)
	{
		if (array[i] == element)
		{
			occurence = occurence + 1;
		}
	}
	printf("Occurence of %d = %d", element, occurence);
	return 0;
}