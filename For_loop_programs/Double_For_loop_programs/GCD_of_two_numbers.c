#include<stdio.h>
int main ()
{
    int i,m,s,a,b,r;
    printf("enter the two numbers : ");
    scanf("%d%d",&a,&b);
    m=(a>b) ? b : a;
    for (i=1;i <= m;i++)
    {
        if ( a%i == 0 && b%i == 0)
             r=i;
        
    }
    printf("%d",r);
    return 0;
}