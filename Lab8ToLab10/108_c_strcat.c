/* Q. 108. C. Program to concatenate two strings without using inbuilt string function
Author : Sohan */
#include <stdio.h>
void concatenateString(char *, char *);
int main() {
	char string1[80], string2[80];
	printf("Enter first string : ");
	gets(string1);
	printf("Enter second string : ");
	gets(string2);
	printf("First String = ");
	concatenateString(string1, string2);
	printf("%s", string1);
	return 0;
}
void concatenateString(char *string1, char *string2) {
	int i;
	while (*string1 != '\0')
		string1++;
	while (*string2 != '\0')
	{
		*string1 = *string2;
		string1++; string2++;
	}
	*string1 = '\0';
}
