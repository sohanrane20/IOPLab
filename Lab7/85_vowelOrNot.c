/* Q. 85. FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT
Author : Sohan */
#include <stdio.h>
void vowelOrNot(char ch);
int main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c", &ch);
	vowelOrNot(ch);
	return 0;
}
void vowelOrNot(char ch)
{
	char vow[5] = {'a', 'e', 'i', 'o', 'u'};
	int i, flag = 0;
	for (i = 0; i < 5 && flag == 0; i++)
	{
		if (ch == vow[i])
		{
			flag = 1;
			
		}
	}
	if (flag == 1)
	{
		printf("%c is a vowel", ch);
	}
	else
	{
		printf("%c is not a vowel", ch);
	}
}