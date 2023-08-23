#include<stdio.h>

int main()
{
    int e,b,i,p=1;
    printf("base values : ");
    scanf("%d",&b);
    printf("exponent values : ");
    scanf("%d",&e);
    for(i=0;i<e;i++)
    {
        p=p*b;
        
    }
    printf("answer : %d",p);
    

    return 0;
}