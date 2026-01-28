/* Q. 84. Function to read information of book and display it
Author : Sohan */
#include <stdio.h>
struct book
{
	char title[80];
	char author[80];
	int year;
};
void readAndDisplay(struct book);
int main()
{
	struct book b1;
	readAndDisplay(b1);
	return 0;
}
void readAndDisplay(struct book b1)
{
	printf("Enter title : ");
	gets(b1.title);
	printf("Enter author : ");
	gets(b1.author);
	printf("Enter year : ");
	scanf("%d", &b1.year);
	printf("Title = %s\nAuthor = %s\nYear = %d\n", b1.title, b1.author, b1.year);
}
