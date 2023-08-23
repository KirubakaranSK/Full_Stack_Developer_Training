#include<stdio.h>
int main ()
{
    int i,n,j,s;
    printf("enter the limit of numbers : ");
    scanf("%d",&n);
    for (i=2;i <= n;i++)
    {
       s=0;
       for(j=1;j<i;j++)
       {
        if (i % j == 0)
        {
           s=s+j;
        }
       }
       if (i == s)
       {
        printf("%d ",i);
       }
    }
    return 0;
}