#include<stdio.h>
int main ()
{
    int k=0,n,s=0,m=0;

    char a[]={'A','B','C','D','E','F'};

    printf("enter the limit of numbers : ");
    scanf("%d",&n);

    while (n>m)
    {
        m=m+16;
        s++;
     
    }
    m-=16;
    k=n-m;
   
    if(k>9)
         printf("%d %c",s-1,a[k-10]);
    else if (k>0)   
        printf("%d%d\n",s-1,k);
    else
        printf("%d",s-1);
    


    return 0;
}
