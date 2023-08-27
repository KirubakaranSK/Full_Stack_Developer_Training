#include<stdio.h>
int fib(int a,int b,int c)
{
    for(int i=0;i<c;i++)
    {
        printf("%d ",a); 
        int d = a+b;
         a=b;
         b=d;
    }
    return a;
}

int main()
{
    int a=0,b=1,n;
    printf("Enter Number");
    scanf("%d",&n);
    fib(a,b,n);
}