#include<stdio.h>
int main(){
	int digit,num,num1;
	printf("Enter the digit from which you want Ten's place from\n");
	scanf("%d",&digit);
	num=digit%100;
    num1=num/10;
    printf("Ten's place of the given digit %d is %d\t",digit,num1);

}