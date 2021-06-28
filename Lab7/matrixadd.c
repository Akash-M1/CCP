//Develop a program to perform addition of two Matrices.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int mat1[10][10],mat2[10][10],mat3[10][10]={0},n1,m1,n2,m2,n3,m3;
	printf("Enter number of Rows in 1st matrix\n");
	scanf("%d",&n1);
	printf("Enter Number of columns in 1st matrix\n"); 
	scanf("%d",&m1);
	printf("Enter number of Rows in 2nd matrix\n");
	scanf("%d",&n2);
	printf("Enter Number of columns in 2nd matrix\n"); 
	scanf("%d",&m2);
	if(n1!=n2 && m1!=m2)
	{
		printf("Enter correct number of rows and columns");
		exit(0);
	}
	printf("Enter the elements of the matrix1\n");
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<m1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the elements of the matrix2\n");
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<m2;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	if(n1==n2 && m1==m2)
	{
		n3=n1;
		m3=m1;
		for(int i=0;i<n3;i++)
		{
			for(int j=0;j<m3;j++)
			{
				mat3[i][j]=mat1[i][j]+mat2[i][j];
			}
		}
		printf("Matrices sum is \n");
		for(int i=0;i<n3;i++)
		{
			printf("\n");
			for(int j=0;j<m3;j++)
			{
				printf("%d\t",mat3[i][j]);
			}
		}
	}	
	return 0;
}