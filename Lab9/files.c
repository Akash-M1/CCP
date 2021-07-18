/*12. Demonstrate how to read data from the keyboard, write it to a file called BMSCE.txt,again read the same data from the BMSCE file,and display it on the screen/console.*/
#include<stdio.h>
int main()
{
	char feedback[40];
	FILE *fp;
	fp=fopen("BMSCE.txt","w");
	printf("Write something about BMSCE\n");
	fgets(feedback,200,stdin);
	fputs(feedback,fp);
	fclose(fp);
	fp=fopen("BMSCE.txt","r");
	printf("Data read from the file:\n");
	while(fgets(feedback,200,fp) != NULL)
	{
		printf("%s",feedback);
	}
	return 0;
}