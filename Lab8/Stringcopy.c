#include<stdio.h>
int len(char str[20])
{
	int i=0,count=0;
	while(str[i]!='\0')
	{
		count += 1;
		i++;
	}
	return count;
}
int main()
{
	char str1[20],str2[20];
	int i=0,j=0;
	printf("Enter the string to be copied\n");
	scanf("%s",str1);
	while(str1[i] != '\0')
	{
		str2[j]=str1[i];
		i++;
		j++; 
	}str2[j]='\0';
	printf("Original string is %s\n",str1);
	printf("Copied string is %s\n",str2);
	printf("Length of the string is %d\n",len(str1));
	return 0;
}