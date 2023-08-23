
#include<stdio.h>
int main()
{
	int n, m=0, l,x,r=0;
    printf("enter binary number : ");
    scanf("%d",&n);

    while (n>0)
    {
        l=n%10;
        
        if(l == 1)
        {
            x=1;
            for (int i=0;i<m;i++)
                x=x*2;
            r=r+x;
        }
        m++;
        n/=10;
        
    }
    if( r > 8)
    {
    int m=0,s=8,l;
    
    while(r>s)
    {
        s+=8;
        m++;
    }
    l=r-(s-8);
    if (r>0)
    {
        printf("%d%d",m,l);
    }
    else
        printf("%d",m);

    }
    else
        printf("%d",r);
    
    printf("\n");

    return 0;
}