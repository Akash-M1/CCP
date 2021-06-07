#include<stdio.h>
int sump()
{
	int n,psum=0,sum=0;
	int nsum=0;
	printf("Enter the numbers for which sum to calculated \n");
	do{
		scanf("%d",&n);
		if(n>=0)
		{
			psum=psum+n;
		}
		if(n<0)
		{
			nsum = nsum+n;
		}
	}while(n!=-1);
	sum = nsum+psum;
	printf("Sum of Positive numbers is %d \n",psum);
	printf("Sum of Negative numbers is %d \n",nsum);
	printf("Total Sum is %d \n",sum);
	return 0;
}
int main()
{
	sump();
	return 0;
}