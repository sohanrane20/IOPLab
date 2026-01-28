/* Q. 84. Function to read information of book and display it using pointer
Author : Sohan */
#include <stdio.h>
struct book
{
	char title[80];
	char author[80];
	int year;
};
void readAndDisplay(struct book *);
int main()
{
	struct book b1, *ptr;
	ptr = &b1;
	readAndDisplay(ptr);
	return 0;
}
void readAndDisplay(struct book *ptr)
{
	printf("Enter title : ");
	gets(ptr -> title);
	printf("Enter author : ");
	gets(ptr -> author);
	printf("Enter year : ");
	scanf("%d", &ptr->year);
	printf("Title = %s\nAuthor = %s\nYear = %d\n", ptr -> title, ptr -> author, ptr -> year);
}
