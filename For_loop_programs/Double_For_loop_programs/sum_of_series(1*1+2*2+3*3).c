// sum of serirs 1*1+2*2+3*3+...

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
            s=s+i;
            
        }
       
        r=r+s;
        printf("%d * %d = %d",i,j,s);
        printf("\n");
    }
    printf("sum of the series : %d",r);

    return 0;
}