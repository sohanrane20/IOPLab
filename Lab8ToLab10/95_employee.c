/* Q. 95. Program to store details of 5 employees using array of structure and display them
Author : Sohan */
#include <stdio.h>
struct employee 
{
	char name[80];
	int number;
	int pay;
};
void readEmployee(struct employee *, int n);
void displayEmployee(struct employee *, int n);
int main() 
{
	int n;
	printf("Enter number of employees : ");
	scanf("%d", &n);
	struct employee employ[n];
	printf("Enter employee name, employee number and basic pay of the employee : ");
	readEmployee(employ, n);
	displayEmployee(employ, n);
	return 0;
}
void readEmployee(struct employee *pointer, int n) 
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%s%d%d", &pointer->name, &pointer->number, &pointer->pay);
		pointer++;
	}
}
void displayEmployee(struct employee *pointer, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Employee name = %s, Employee number = %d, Basic pay = %d\n", pointer -> name, pointer -> number, pointer -> pay);
		pointer++;
	}
}
