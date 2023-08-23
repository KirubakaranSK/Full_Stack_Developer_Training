#include<stdio.h>
int main ()
{
    int i,n,s=1;
    printf("enter the limit of numbers : ");
    scanf("%d",&n);
    for (i=1;i<= n;i++)
        s*=i;
    printf("%d factorial is %d .",n,s);
    
    return 0;
}