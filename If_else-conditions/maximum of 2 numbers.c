#include<stdio.h>
void main() 
{
    int n,n1;
    printf("Enter two number");
    scanf("%d %d",&n,&n1);
    if(n>=n1)
    {
        printf("the maximum number is %d",n);
    }
    else
    {
        printf("The maximum number is %d",n1);
    }
}