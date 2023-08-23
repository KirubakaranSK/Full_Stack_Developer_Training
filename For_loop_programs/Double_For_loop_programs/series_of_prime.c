#include<stdio.h>
int main ()
{
    int i,n,f=0,j;
    printf("enter the limit of numbers : ");
    scanf("%d",&n);
    if (n>1)
    {
    for(j=2;j<=n;j++)
    {
    f =0;
    for (i=2;i <= j/2;i++)
    { 
       if (n % i == 0)
       {
        f==1;
        break;
       }
    }
    if (f == 0)
        printf("%d ",j);

    }
    }
    else
      printf("there is no prime numbers.");
    return 0;
}