#include<stdio.h>
int sumd(int n)
{
	int sum =0,rem;
	while(n!=0)
	{
		rem = n%10;
		n=n/10;
		sum = sum+rem;
	}
	return sum;
}
int main()
{
	int n,x;
	printf("Enter the number for which digit sum to be calculated\n");
	scanf("%d",&n);
	x=sumd(n);
	printf("Sum of digits of entered number %d is %d",n,x);
}