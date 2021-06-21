#include<stdio.h>
int square(int a)
{
	return (a*a);
}
int squareodd(int n)
{
	int sumo=0;
	for(int i=1;i<=2*n;i++)
	{
		if(i%2!=0)
		{
			sumo=sumo+square(i);
		}
	}
	return sumo;
}
int main()
{
	int n,sumo;
	printf("Enter the value of N for which squares to be calculated");
	scanf("%d",&n);
	sumo=squareodd(n);
	printf("Sum of squares of first  %d odd numbers :%d ",n,sumo);
	return 0;
}