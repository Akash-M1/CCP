//Develop a program to print the transpose of a matrix.
#include<stdio.h>
int main()
{
	int i,j,arr[20][20],m,n;
	printf("Enter number of rows in matrix\n");
	scanf("%d",&n);
	printf("Enter number of columns in matrix\n");
	scanf("%d",&m);
	printf("Enter the Elements of the matrix to be transposed\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Original matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("Transposed matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
	return 0;

}