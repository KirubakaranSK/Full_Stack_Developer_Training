#include<stdio.h>
int main ()
{
    int m=0,n,s=8,r;
    printf("enter the limit of numbers : ");
    scanf("%d",&n);
    while(n>s){
        s+=8;
        m++;
    }
    r=n-(s-8);
    if (r>0){
        printf("%d%d",m,r);
    }
    else
        printf("%d",m);
    return 0;
}
