#include<stdio.h>
int evenr(int m,int n)
{
	int i;
	printf("Even Numbers from range %d-%d is: \n",m,n);
	if(m%2!=0)
	{
		m=2*m;
	}
	for(i=m;i<=n;i=i+2)
	{
		printf("%d",i);
		printf("\n");
	}
	return 0;
}
int main()
{
	int m,n;
	printf("Enter the Range M-N to print even numbers\n");
	scanf("%d %d",&m,&n);
	evenr(m,n);
	return 0;
}
