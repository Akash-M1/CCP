#include<stdio.h>
int search(int value, int a[10], int n)
{
	int pos;
	for (int i=0; i<n;i++)
	{
		if (value == a[i])
		{
			pos = i;
			break;
		}
	}
	return pos;
}
int main()
{
	int i,value,array[10],n,pos;
	printf("Enter the number of elements in the Array\n");
	scanf("%d",&n);
	printf("Enter the elements of the Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the value of the element to be deleted\n");
	scanf("%d",&value); //4 
	pos=search(value,array,n);
	for(i=pos;i<n;i++)
	{
		array[i]=array[i+1];
	}
	printf("Resultant array:\n");
	for(i=0;i<n-1;i++)
	{
		printf("%d \t",array[i]);
	}
	return 0;
}