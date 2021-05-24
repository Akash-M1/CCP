#include<stdio.h>
int sumn(int n)
{
	int i,sum=0;
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum Of first %d natural number is %d \t",n,sum );
	return 0;
}
int main()
{
	int n;
	printf("Enter the value of N\n");
	printf("For Calculating sum of n numbers\n");
	scanf("%d",&n);
	sumn(n);
}