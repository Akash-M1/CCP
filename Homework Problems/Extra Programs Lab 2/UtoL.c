#include<stdio.h>
int main(){
	char ch ;
	printf("Enter a Character in Uppercase to be converted to lower case\n");
	scanf("%c",&ch);
	char chl = (int)ch+32;
	printf("Uppercase of entered Character %c is %c",ch,chl );
	return 0;
}