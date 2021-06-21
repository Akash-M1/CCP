#include<stdio.h>
int main()
{
	int array[10],value,i,pos,n,npos;
	printf("Enter the number of elements in the Array\n");
	scanf("%d",&n);
	printf("Enter the elements of the Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the Value to be inserted\n");
	scanf("%d",&value);
	printf("Enter the position to insert\n");
	scanf("%d",&pos);
	npos=pos-1;
	for(i=n-1;i>=npos;i--)
	{
		array[i+1]=array[i];
	}
	array[npos]=value;
	printf("Resultant array:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d \t",array[i]);
	}
}