/*10. Develop a C program to perform arithmetic operations (addition, subtraction,
multiplication, division and remainder) on two integers using pointers.*/
#include<stdio.h>
int operations(int *, int *, int *, int *, int*, float *, int *);
int main()
{
	int a,b;
	int add,sub,multiplication,rem;
	float division;
	printf("Enter the two numbers operations: ");
	scanf("%d %d",&a,&b);
	operations(&a, &b, &add, &sub, &multiplication, &division, &rem);
	printf("Addition :%d\n",add);
	printf("Subtraction :%d\n",sub);
	printf("Division :%0.2f\n",division);
	printf("Multiplication :%d\n",multiplication);
	printf("Remainder :%d\n",rem);
	return 0;
}
int operations(int *a, int *b, int *add, int *sub, int *multiplication, float *division, int *rem)
{
	*add=*a+*b;
	*sub=*a-*b;
	*multiplication=*a**b;
	*division=(float)(*a)/(*b);
	*rem=(*a)%(*b);
	return 0;
}
