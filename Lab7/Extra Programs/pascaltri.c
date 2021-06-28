//C program to print Pascal's triangle.
#include<stdio.h>
int main()
{
	int i,j,n;
	int ary[20][20]={0};
	ary[0][0]=ary[1][0]=ary[1][1]=1;
	printf("Enter the number of rows for Pascal's Triangle\n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		ary[i][0]=1;
		for(j=1;j<n;j++)
		{
			ary[i][j]=ary[i-1][j-1]+ary[i-1][j];
		}
	}
	printf("********PASCAL'S TRIANGLE*******\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d  ",ary[i][j]);
		}
		printf("\n");
	}
	return 0;
}