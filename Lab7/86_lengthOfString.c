/* Q. 86. FUNCTION TO READ LINE OF TEXT AND FIND OUT LENGTH OF STRING
Author : Sohan */
#include <stdio.h>
int lengthOfString(char []);
int main()
{
	char line[100]; 
	printf("Enter a line of text : ");
	gets(line);
	printf("Length of string = %d", lengthOfString(line));
	return 0;
}
int lengthOfString(char line[])
{
	int len = 0, i = 0;
	while (line[i] != '\0')
	{
		len = len + 1;
		i = i + 1;
	}
	return len;
}
