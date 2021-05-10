#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr;
    int a,b;
    printf("Enter two Numbers");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is Largest",a);
    }
    else{
        printf("%d is Largest",b);
    }
    return(0);
    getch();

}
