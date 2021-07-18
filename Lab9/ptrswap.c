//11. Illustrate pointers in swapping two numbers.
#include<stdio.h>
int swapptr(int *, int *);
int main()
{
	int a,b;
	printf("Enter two numbers to swap\n");
	scanf("%d %d",&a,&b);
	printf("Before Swapping\n");
	printf("a :%d b :%d\n",a,b);
	swapptr(&a, &b);
	printf("After Swapping\n");
	printf("a :%d b :%d",a,b);
	return 0;
}
int swapptr(int *a, int *b)
{
	int *temp;
	*temp=*a;
	*a=*b;
	*b=*temp;
	return 0;
}