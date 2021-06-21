#include<stdio.h>
int main()
{
	int i,value,array[10],n,j;
	printf("Enter the number of elements in the Array\n");
	scanf("%d",&n);
	printf("Enter the elements of the Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the Value to be inserted\n");
	scanf("%d",&value);
	for(i=0;i<n;i++)
	{
		if(array[i]>value)
		{
			for(j=n-1;j>=i;j--)
			{
				array[j+1]=array[j];
			}
			array[i]=value;
			break;
		}
		else
		{
			array[n]=value;
		}
	}
	printf("Resultant array:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d \t",array[i]);
	}
	return 0;
}