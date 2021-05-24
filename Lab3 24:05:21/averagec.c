#include<stdio.h>
float calculate(float a,float b,float c)
{
	float avg = 0,sum = 0;
	sum = a+b+c;
	avg = sum/3;
	return avg;
}
int main()
{
	float a,b,c,x;
	printf("Enter the values of Three numbers\n");
	printf("For which average to be calculated\n");
	scanf("%f %f %f",&a,&b,&c);
	x = calculate(a,b,c);
    printf("Average of three numbers %0.2f,%0.2f,%0.2f is %0.2f:",a,b,c,x );
    return 0;
}