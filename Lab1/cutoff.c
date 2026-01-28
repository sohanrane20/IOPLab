/* Program to calculate cutoff marks
Author : Sohan */
#include <stdio.h>
int main() 
{
	int cutoff, math, physics, chemistry, entrance;
	printf("Enter Mathematics marks out of 200 : ");
	scanf("%d", &math);
	printf("Enter Physics marks out of 200 : ");
	scanf("%d", &physics);
	printf("Enter Chemistry marks out of 200 : ");
	scanf("%d", &chemistry);
	printf("Enter Entrance marks out of 100 : ");
	scanf("%d", &entrance);
	cutoff = math / 2 + physics / 2 + chemistry / 2 + entrance;
	printf("Cutoff Marks = %d", cutoff);
	return 0;
}