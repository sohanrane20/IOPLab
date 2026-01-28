/* Q. 108. B. Program to compare two strings without using inbuilt string function
Author : Sohan */
#include <stdio.h>
#include <string.h>
int compareString(char *, char *);
int main() {
	char string1[80], string2[80];
	printf("Enter first string : ");
	gets(string1);
	printf("Enter second string : ");
	gets(string2);
	printf("%d", compareString(string1, string2));
	return 0;
}
int compareString(char *string1, char *string2) {
	int flag = 0;
	while (*string1 != '\0')
	{
		if (*string1 != *string2)
		{
			flag = *string1 - *string2;
			break;
		}
		string1++; string2++;
	}
	return flag;
}
