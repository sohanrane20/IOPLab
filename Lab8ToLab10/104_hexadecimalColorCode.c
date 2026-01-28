/*
104. Program to display hexadecimal color code using enumeration with switch statement
Author: Sohan 
*/
#include<stdio.h>
enum color 
{
	red,
	blue,
	green,
	pink,
	yellow,
	violet
};
char *hexcode(int color);
int main() 
{
	int option;
	printf("1. Red\n");
	printf("2. Blue\n");
	printf("3. Green\n");
	printf("4. Pink\n");
	printf("5. Yellow\n");
	printf("6. Violet\n");
	printf("Enter option: ");
	scanf("%d", &option);
	enum color color_name;
	switch(option)
	{
		case 1:
			color_name=red;
			break;
		case 2:
			color_name=blue;
			break;
		case 3:
			color_name=green;
			break;
		case 4:
			color_name=pink;
			break;
		case 5:
			color_name=yellow;
			break;
		case 6:
			color_name=violet;
			break;
		default:
			printf("Wrong option entered");
	}
	printf("Hexadecimal color code=%s", hexcode(color_name));
	return 0;
}
char *hexcode(int color)
{
	switch(color)
	{
		case 0:
			return "FF0000";
		case 1:
			return "0000FF";
		case 2:
			return "3CB371";
		case 3:
			return "EE82EE";
		case 4:
			return "FFA500";
		case 5:
			return "6A5ACD";
	}
}
