/* Q. 108. D. Program to reverse given string without using inbuilt string function
Author : Sohan */
#include <stdio.h>
int stringLength(char *);
void reverseString(char *);
int main() {
	char string[80];
	printf("Enter a string : ");
	gets(string);
	printf("Reversed String = ");
	reverseString(string);
	printf("%s", string);
	return 0;
}
int stringLength(char *string) {
	int count = 0;
	while (*(string++) != '\0') {
		count = count + 1;
	}
	return count;
}
void reverseString(char *string) {
	int i, length, l;
	char temporary;
	length = stringLength(string);
	l = length - 1;
	for (i = 0; i < length / 2; i++) {
		temporary = *(string + i);
		*(string + i) = *(string + l);
		*(string + l) = temporary;
		l--;
	}
}
