#include<stdio.h>
void main() 
{
    int n,n1;
    printf("Enter two number");
    scanf("%d %d",&n,&n1);
    if(n>=n1)
    {
        printf("the larger number is %d",n);
    }
    else
    {
        printf("The larger number is %d",n1);
    }
}