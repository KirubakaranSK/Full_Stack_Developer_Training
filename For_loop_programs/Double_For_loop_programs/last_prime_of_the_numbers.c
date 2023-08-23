#include<stdio.h>
int main ()
{
    int i,n,j,s;
    printf("enter the numbers : ");
    scanf("%d",&n);
    for (i=n;i >0;i--)
    {
       s=0;
       for(j=2;j<= i/2 ;j++)
       {
        if (i % j == 0)
        {
           s=1;
           break;
        }
       }    
       if (!s)
       {
        printf("%d is nearest lesser prime number.",i);
        break;
       }
    }
    return 0;
}