#include<stdio.h>
int main ()
{
    int i,n,f=0;
    printf("enter the numbers : ");
    scanf("%d",&n);
    for (i=2;i <= n/2;i++)
    { 
       if (n % i == 0)
       {
        f==1;
        break;
       }
    }
    if (f == 0)
        printf("%d it is prime.",n);
    else
        printf("%d is not the prime.",n);
    
    return 0;
}