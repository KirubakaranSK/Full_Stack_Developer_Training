#include<stdio.h>
int fact (int n)
{
    if(n==1)
     return 1;
    else 
     return n*(fact(n-1));
}
int main()
{
    int m;
    printf("enter the number ");
    scanf("%d",&m);
    printf("%d",fact(m));
}