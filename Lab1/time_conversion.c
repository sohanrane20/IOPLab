/* Program to convert hours, minutes, seconds to total seconds
Author : Sohan */
#include <stdio.h>
int main() 
{
	int hour, minute, second, total_second;
	printf("Enter seconds : ");
	scanf("%d", &second);
	printf("Enter minutes : ");
	scanf("%d", &minute);
	printf("Enter hours : ");
	scanf("%d", &hour);
	total_second = second + minute * 60 + hour * 60 * 60;
	printf("Total seconds = %d", total_second);
	return 0;
}