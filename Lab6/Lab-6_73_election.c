/* Q. 73. Program to read ballots and count votes cast for each candidate
Author : Sohan */
#include <stdio.h>
int main()
{
	int voter, i, vote[6] = {0, 0, 0, 0, 0, 0}, max;
	printf("Enter number of voters : ");
	scanf("%d", &voter);
	int ballot[voter];
	for (i = 0; i < voter; i++)
	{
		printf("Enter vote : ");
		scanf("%d", &ballot[i]);
		switch (ballot[i])
		{
			case 1 :
				vote[0] = vote[0] + 1;
				break;
			case 2 :
				vote[1] = vote[1] + 1;
				break;
			case 3 :
				vote[2] = vote[2] + 1;
				break;
			case 4 :
				vote[3] = vote[3] + 1;
				break;
			case 5 :
				vote[4] = vote[4] + 1;
				break;
			default : 
				vote[5] = vote[5] + 1;
		}
	}
	max = 0;
	for (i = 0; i < 5; i++)
	{
		if (vote[i] > vote[max])
		{
			max = i;
		}
	}
	printf("Number of votes cast for candidate 1 = %d", vote[0]);
	printf("\nNumber of votes cast for candidate 2 = %d", vote[1]);
	printf("\nNumber of votes cast for candidate 3 = %d", vote[2]);
	printf("\nNumber of votes cast for candidate 4 = %d", vote[3]);
	printf("\nNumber of votes cast for candidate 5 = %d", vote[4]);
	printf("\nNumber of spoilt ballots = %d", vote[5]);
	printf("\nCandidate %d won the election", max + 1);
	return 0;
}