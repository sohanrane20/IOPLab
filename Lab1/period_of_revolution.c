/* Program to convert period of revolution of earth in seconds to days, hours and minutes
Author : Sohan */
#include <stdio.h>
int main() 
{
	int second, day, hour, minute;
	second = 31558150;
	minute = second / 60;
	hour = minute / 60;
	day = hour / 24;
	printf("Period of Rrevolution in seconds = %d\n", second);
	printf("Minutes = %d\n", minute);
	printf("Hours = %d\n", hour);
	printf("Days = %d\n", day);
	return 0;
}