/* Q. 96. Program to SORT THE GIVEN NUMBER OF STRINGS IN ASCENDING ORDER 
Author : Sohan */
#include <stdio.h>
#include <string.h>
void readString(char [][80], int);
void printString(char [][80], int);
void sortString(char [][80], int);
int main() {
	int n, i, j;
	printf("Enter dimension : ");
	scanf("%d", &n);
	char string[n][80];
	printf("Enter %d strings : ", n);
	readString(string, n); // &string[0]
	sortString(string, n);
	printf("Sorted strings = \n");
	printString(string, n);
	return 0;
}
void readString(char string[][80], int count) {
	int i;
	for (i = 0; i < count; i++) {
		scanf("%s", string[i]);
	}
}
void printString(char string[][80], int count) {
	int i;
	for (i = 0; i < count; i++) {
		printf("%s\n", string[i]);
	}
}
void sortString(char string[][80], int count) {
	char temporary[80];
	int i, j;
	for (i = 0; i < count; i++) {
		for (j = i + 1; j < count; j++) {
			if (strcmp(string[i], string[j]) > 0) {
				strcpy(temporary, string[i]);
				strcpy(string[i], string[j]);
				strcpy(string[j], temporary);
			}
		}
	}
}
