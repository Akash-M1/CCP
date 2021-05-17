#include<stdio.h>
int main(){
	float fahrenheit;
	float celsius;
	printf("Enter the temperature in degree Fahrenheit\n");
	scanf("%f",&fahrenheit);
	celsius=((fahrenheit-32)*5)/9;
	printf("Temperature in Celsius :\t %0.2f",celsius);
	return 0;
}