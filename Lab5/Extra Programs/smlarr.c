#include<stdio.h>
int main()
{
	int i,n,a[20],small,pos;
	printf("Enter the size of the array \n");
	scanf("%d",&n);
	printf("Enter the elements of array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
			pos=i+1;
		}
		if(pos==0){
			pos++;
		}
	}
	printf("Smallest number : %d",small);
	printf("Position of that number : %d",pos);
}
