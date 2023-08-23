
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
    if(r>16)
    {
        
    int k=0,n,s=0,m=0;

    char a[]={'A','B','C','D','E','F'};

    while (r>m)
    {
        m=m+16;
        s++;
     
    }
    m-=16;
    k=r-m;
   
    if(k>9)
         printf("%d %c",s-1,a[k-10]);
    else if (k>0)   
        printf("%d%d\n",s-1,k);
    else
        printf("%d",s-1);
    
    }
    else
      printf("%d",r);
    


    return 0;
}