#include<stdio.h>
void main() 
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("the larger Number is %d",a);
        }
        else
        {
            printf("the larger number is %d",c);
        }
    }
    if(b>c)
    {
        printf("the larger number is  %d",b);
    }
    else
    {
        printf("the larger number is %d",c);
    }
}