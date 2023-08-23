#include<stdio.h>
int main ()
{
    int i,n;
    printf("enter the limitof numbers : ");
    scanf("%d",&n);
    for (i=1;i<= n;i+=2)
    {
       printf("%d ",i);
    }
    return 0;
}