#include<stdio.h>
int small(int a,int b,int c)
{
	if(a<b){
		if(a<c){
			printf("%d is the smallest number",a );
		}
	}
	else if(b<c){
		printf("%d is the smallest number",b);
	}
	else {
		printf("%d is the smallest number",c);
	}
	return 0;
}
int main()
{
	int a,b,c;
	printf("Enter three numbers");
	scanf("%d %d %d",&a,&b,&c);
	small(a,b,c);
}