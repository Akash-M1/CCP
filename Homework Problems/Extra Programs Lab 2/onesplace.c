#include<stdio.h>
int main(){
	int digit,num;
	printf("Enter the digit from which you want One's place of it\n");
	scanf("%d",&digit);
	num=digit%10;
    printf("One's place of the given digit %d is %d\t",digit,num);

}