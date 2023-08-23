#include<stdio.h>
int main()
{
    float x=3,z,r;
    int i,j,n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n>=2)
    {
        r=1+x;
        for(i=1;i<=n-2;i++)
        {
            float a=1,b=1;
            int m=1;
            for(j=1;j<=m+i;j++)
              {
                a=a*x;
                b=b*j;

              }
        
        z=a/b;
        r=r+z;
        }
    }
    printf("%f ",r);
     
    return 0;
}