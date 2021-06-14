#include<stdio.h>
int main()
{
	char c;
	printf("Enter the alphabets to be verified \n");
	scanf("%c",&c);
	switch(c)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf("Entered Character is Vowel");
		break;
		default:
		printf("Entered character is Consonent");
		break;
	}
}