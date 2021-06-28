//Demonstrate reading a two-dimensional array of marks which stores marks of 4 students in 3 subjects and display the highest marks in each subject.
#include<stdio.h>
int main()
{
	int marks[4][3],max,i,j;
	printf("Enter Marks of four students in three subjects\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the Marks of Student:%d and Subject:%d\t",i+1,j+1);
			scanf("%d",&marks[i][j]);
		}	
		
	}
	for(j=0;j<3;j++)
	{
		max=marks[0][j];
		for(i=1;i<4;i++)
		{
			if(max<marks[i][j])
			{
				max=marks[i][j];
			}
		}
		printf("Highest marks in Subject %d = %d \n",j+1,max);
	}
	return 0;
}