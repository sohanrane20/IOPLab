/* Q. 19. Program to check whether or not given character is small case using conditional operator
Author : Sohan */
#include <stdio.h>
int main()
{
	char character;
	int ascii_code;
	printf("Enter a character : ");
	scanf("%c", &character);
	ascii_code = (int) character;
	printf((ascii_code >= 97 && ascii_code <= 122) ? "Small case letter" : "Not a small case letter");
	return 0;
}