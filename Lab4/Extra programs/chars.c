#include<stdio.h>
int main()
{
	char a;
	int tem1=0,tem2=0,tem3=0;
	printf("Enter a Characters to be checked\n");
	do{
		scanf("%c",&a);
		if((int)a>=97 && (int)a<=122)
		{
			tem1++;
		}
		else if((int)a>=65 && (int)a<=90)
		{
			tem2++;
		}
		else if((int)a>=47 && (int)a<=56)
		{
			tem3++;
		}
	}while(a!='*');
	printf("Lower Case : %d \n",tem1);
	printf("Upper Case : %d \n",tem2);
	printf("Numbers : %d \n",tem3);
	return 0;
}