#include<stdio.h>
int interchange()
{
	int i,small,large,max,min,a[20],temp,n;
	printf("Enter Number of elements in the Array");
	scanf("%d",&n);
	printf("Enter the Array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	max=0;
	min=0;
	small=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
			min=i;
		}
	}
	large=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
			max=i;
		}
	}
	temp=a[min];
	a[min]=a[max];
	a[max]=temp;
	printf("Resultant array :\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
int main()
{
	interchange();
}