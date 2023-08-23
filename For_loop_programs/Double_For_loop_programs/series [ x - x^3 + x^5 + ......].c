// Series(x - x^3 + x^5 + ......)

#include<stdio.h>
int main()
{

   int x=2,a=1,r=0,n,i,j;
   printf("Enter the number:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    int b=1;
    for(j=1;j<=a;j++)
        b=b*x;
    
    a=a+2;
    if(i%2==0)
     {
        r=r-b;
     }
    else
     {
        r=r+b;
     }
   }
   printf("%d",r);
return 0;
}
