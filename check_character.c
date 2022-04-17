#include <stdio.h>
int main()
{
	char ch;
	printf("Enter any character : ");
	scanf("%c",&ch);

	if(ch>='a' && ch<='z')
		printf("Small character");
	else if(ch>='A' && ch<='Z')
		printf("Capital character");
	else if(ch>='0' && ch<='9')
		printf("Digit character");
	else
		printf("Special character");

	return 0;
}