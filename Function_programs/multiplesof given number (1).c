#include<stdio.h>
int multi(int n)
{
    int sum=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d",multi(n));
}