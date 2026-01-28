/* Q. 96. Program to SORT THE GIVEN NUMBER OF STRINGS IN ASCENDING ORDER USING POINTERS
Author : Sohan */
#include <stdio.h>
#include <string.h>
void readString(char (*)[], int);
void printString(char (*)[], int);
void sortString(char (*)[], int);
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
void readString(char (*pointer)[80], int count) {
	int i;
	for (i = 0; i < count; i++) {
		scanf("%s", pointer + i);
	}
}
void printString(char (*pointer)[80], int count) {
	int i;
	for (i = 0; i < count; i++) {
		printf("%s\n", *(pointer + i));
	}
}
void sortString(char (*pointer)[80], int count) {
	char temporary[80];
	int i, j;
	for (i = 0; i < count; i++) {
		for (j = i + 1; j < count; j++) {
			if (strcmp(*(pointer + i), *(pointer + j)) > 0) {
				strcpy(temporary, *(pointer + i));
				strcpy(*(pointer + i), *(pointer + j));
				strcpy(*(pointer + j), temporary);
			}
		}
	}
}
