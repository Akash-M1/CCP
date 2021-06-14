#include<stdio.h>
int main()
{
	int ar[10],i,n,num;
	printf("Enter the length of the Array \n");
	scanf("%d",&n);
	printf("Enter the elements of the Array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		ar[i]=num;
	}
	printf("Array of given numbers\n");
	for(i=0;i<n;i++)
	{
		printf("%d",ar[i]);
		printf("\n");
	}
}