

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
    printf("%d",r);
    


    return 0;
}