#include<stdio.h>
int main(){
	int i = 1990;
	printf("Leap Years between 1990 and 2020 are\n");
	do{
		if(i%400==0 && i%100!=0 || i%4==0)
		{
			printf("%d \n",i);
		}
		i++;
	}while(i<=2020);
	return 0;
}