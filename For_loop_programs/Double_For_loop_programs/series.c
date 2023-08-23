// sum of series (1-x^2/2!+x^3/3!+...)

#include<stdio.h>
int main()
{
    float z,r=1;
    int i,j,n,x=3,m=2;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i < n;i++)
    {
            float a=1,b=1;
        

            for(j=1;j<=m;j++)
            {
                a=a*x;
                b=b*j;
            }
            m+=2;
            z=a/b;
        if(i%2 == 0)
            r=r+z;
        else
            r=r-z;
     
    }
    printf("%f ",r);
    return 0;

}