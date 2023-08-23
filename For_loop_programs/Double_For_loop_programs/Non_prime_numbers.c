#include<stdio.h>
int main ()
{
    int i,n,j,s;
    printf("enter the numbers : ");
    scanf("%d",&n);
    for (i=4;i <= n;i++)
    {
        s=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j == 0)
            {
                s=1;
                break;
            }
        }
        if(s)
           printf("%d ",i);
    }
    return 0;
}