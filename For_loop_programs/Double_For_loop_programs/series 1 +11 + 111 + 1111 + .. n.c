// Series[1 +11 + 111 + 1111 + .. n]

#include<stdio.h>
int main()
{
    int a=1,n,r=0,i;
    printf("Enter the number:");
    scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
       r=r*10+1;
       printf("%d+",r);
       a=a+r;
     }
    printf("\n%d",a);
    return 0;
}