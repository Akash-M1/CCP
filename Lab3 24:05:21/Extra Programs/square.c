#include<stdio.h>
float square(float x)
{
	return x*x;
}
int main()
{
	float x,x2;
	printf("Enter the number to be calculated\n");
	scanf("%f",&x);
	x2 = square(x);
	printf("Square of the given number %0.2f is %0.2f \t",x,x2);
}
