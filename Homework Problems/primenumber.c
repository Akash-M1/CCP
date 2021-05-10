#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,temp=0;
    printf("Enter a Number");
    scanf("%d",&a);
    for(i=2;i <= (a-1);i++)
    if(a%i==0){
        temp++;
        break;
    }
    if(a==1){
        printf("1 is neither prime nor compsite");
    }
    else
    if(temp==0)
    {
        printf("%d is a Prime number",a);
    }
    else
    {
        printf("%d is a compsite number",a);
    }
    
    return 0;
    getch();

}

