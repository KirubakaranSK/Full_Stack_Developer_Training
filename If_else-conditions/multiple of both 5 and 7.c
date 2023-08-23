#include<stdio.h>
void main() 
{
    int a;
    printf("Enter a  number");
    scanf("%d",&a);
    if(a % 3 ==0 && a % 5 ==0)
    {
        printf("the number is divisible by 5 and 3 %d",a);
    }
    else
    {
        printf("the number is not divisible by 5 and 3 %d",a);
    }
}