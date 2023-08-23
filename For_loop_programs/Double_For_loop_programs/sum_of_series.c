// sum of serirs 1+1/2^2+1/3^3+...

#include<stdio.h>
int main ()
{
    float r,k=0.0;
    int i,n,j;
    printf("enter the numbers of terms : ");
    scanf("%d",&n);
   
    for (i=1;i <= n;i++)
    {
        int s=1;
        for(j=1;j<=i;j++)
        {
            s=s*i;
            
        }
     
        r=1.0/s;
       
        k+=r;
        
    }
    printf("%f",k);
    return 0;
}