#include<stdio.h>
#include<math.h>
int main(){
	float x1,x2,y1,y2;
	float distance;
	printf("Enter X Co-Ordinates\n");
	scanf("%f %f",&x1,&x2);
	printf("Enter Y Co-Ordinates\n");
	scanf("%f %f",&y1,&y2);
	distance = sqrt(pow((x1-x2) ,2) + pow((y1-y2) ,2));
	printf("Distance between those two points (%0.1f,%0.1f) and (%0.1f,%0.1f) is %0.2f \n",x1,y1,x2,y2,distance);
	return 0;
}