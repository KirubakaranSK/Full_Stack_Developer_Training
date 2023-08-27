#include<stdio.h>
int digits(int n)
{
    int sum=0,t,i; 
    for(i=n;i>0;i=i/10)
    {
        t=i%10;
        sum=sum+t;
    }
    return sum;
}
int main()
{
    int a;
    printf("enter the number ");
    scanf("%d",&a);
    printf("%d",digits(a));
}