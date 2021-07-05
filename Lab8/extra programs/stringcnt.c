#include<stdio.h>
int main()
{
	char str1[20],str2[20],str3[20];
	printf("Enter string1 for concatenation\n");
	scanf("%s",str1);
	printf("Enter string2 for concatenation\n");
	scanf("%s",str2);
	int i=0,j=0;
	while(str1[i] != '\0')
	{
		str3[i]=str1[i];
		i++;
	}
	while(str2[j] != '\0')
	{
		str3[i]=str2[j];
		i++;
		j++;
	}
	printf("String 1 %s\n",str1);
	printf("String 2 %s\n",str2);
	printf("Concatenated string is %s\n",str3);
	return 0;
}