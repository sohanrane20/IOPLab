/* Q. 108. A. Program to copy one string into another without using inbuilt string function
Author : Sohan */
#include <stdio.h>
void copyString(char *, char *);
int main() {
	char string1[50], string2[50];
	printf("Enter second string : ");
	gets(string2);
	copyString(string1, string2);
	printf("First String = ");
	printf("%s", string1);
	return 0;
}
void copyString(char *string1, char *string2) {
	while (*string2 != '\0')
	{
		*string1 = *string2;
		string1++; string2++;
	}
}
