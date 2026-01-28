/* Program to convert total seconds into time
Author : Sohan */
#include <stdio.h>
int main() 
{
	int second, hour, minute;
	printf("Enter total seconds : ");
	scanf("%d", &second);
	minute = second / 60;
	hour = minute / 60;
	printf("Hours = %d\n", hour);
	printf("Minutes = %d\n", minute);
	return 0;
}