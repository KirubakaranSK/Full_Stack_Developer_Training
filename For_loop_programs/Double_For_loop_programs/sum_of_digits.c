#include<stdio.h>
int main ()
{
    int i,n,s=0;
    printf("enter the numbers : ");
    scanf("%d",&n);
    while (n>0)
    {
        s+=n%10;
        n/=10;
    }
    
    printf("%d is sum of digit.",s);
    
    return 0;
}