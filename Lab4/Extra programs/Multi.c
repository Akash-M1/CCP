#include<stdio.h>
int multiple(int n)
{
	int i,multiple;
	printf("Multiples of numbers from 1 to %d \n",n);
	for(i=1;i<=100;i++)
	{
		multiple = i*n;
		printf("%d X %d = %d \n",n,i,multiple);
	}
	return 0;
}
int main()
{
	int n;
	printf("Enter the value of n for which multiples of n to be printed \n");
	scanf("%d",&n);
	multiple(n);
	return 0;
}