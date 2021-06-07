#include<stdio.h>
#include<math.h>
int roots(int a, int b,int c)
{
	float d,r1,r2,img;
	d=(b*b)-(4*a*c);
	if(d>0){
		r1=(-b + sqrt(d))/(2*a);
		r2=(-b - sqrt(d))/(2*a);
		printf("Roots are real and distinct %0.2f,%0.2f",r1,r1);
	}
	else if(d==0){
		r1 = ((-b)/(2*a));
		printf("Roots are real and equal %0.2f,%0.2f",r1,r1);
	}
	else if(d<0){
		r1=(-b)/(2*a);
		img= sqrt(-d)/(2*a);
		printf("Roots are imaginary and distinct %0.2f + %0.2fi ,%0.2f - %0.2fi",r1,img,r1,img);
	}
	return 0;
}
int main()
{
	int a,b,c;
	printf("Enter the values of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	roots(a,b,c);
}