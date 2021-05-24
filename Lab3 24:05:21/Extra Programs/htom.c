#include<stdio.h>
int calculate(int h ,int m)
{
	int diff;
	if(m>60)
	{
		h=h+1;
		diff = m-60;
		printf("Converted Value is %d:%d",h,diff);
	}
	else
	{
		printf("Converted Value is %d:%d",h,m);
	}
	return 0;
}
int main(){
	int h,m;
	printf("Enter Hours and Minutes\n");
	scanf("%d %d",&h,&m);
	calculate(h,m);
	return 0;
}