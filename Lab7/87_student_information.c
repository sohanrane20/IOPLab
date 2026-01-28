/* Q. 87. Program to READ INFORMATION OF 10 STUDENTS AND DISPLAY THE INFORMATION OF THOSE STUDENTS WHOSE MARKS ARE GREATER THAN 500. (PASSING ARRAY OF STRUCTURE INTO FUNCTION)
Author : Sohan */
#include <stdio.h>
struct student
{
	int roll_number;
	int marks;
};
void studentInformation(struct student []);
int main()
{
	struct student s[10];
	studentInformation(s);
	return 0;
}
void studentInformation(struct student s[10])
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("Enter roll number : ");
		scanf("%d", &s[i].roll_number);	
		printf("Enter marks : ");
		scanf("%d", &s[i].marks);
	}
	for (i = 0; i < 10; i++)
	{
		if (s[i].marks > 500)
		{
			printf("Roll number = %d, Marks = %d\n", s[i].roll_number, s[i].marks);	
		}
	}
}