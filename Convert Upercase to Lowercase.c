#include<stdio.h>

int main()
{
	char ch;
	printf("Enter a character in uppercase : ");
	scanf("%c",&ch);
	ch=ch+32;
	printf("character in lowercase = %c",ch);
	return 0;
}
