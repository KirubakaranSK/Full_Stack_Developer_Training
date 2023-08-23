#include<stdio.h>
void main() 
{
    int n,n1,n2;
    printf("Enter three number");
    scanf("%d %d %d",&n,&n1,&n2);
    if(n>=n1 && n>=n2)
    {
        printf("the maximum number is %d",n);
    }
    else if(n1>=n2)
    {
        printf("The maximum number is %d",n1);
    }
    else
    {
        printf("The maximum number is %d",n2);
    }
}