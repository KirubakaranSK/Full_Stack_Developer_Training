// sum of serirs 1+(1+2)+(1+2+3)+...

#include<stdio.h>
int main ()
{
    int i,n,j,r=0;
    printf("enter the numbers of terms : ");
    scanf("%d",&n);
   
    for (i=1;i <= n;i++)
    {
        int s=0;
        for(j=1;j<=i;j++)
        {
            s=s+j;
            
        }
        r+=s;
    }
    printf("%d",r);
    return 0;
}