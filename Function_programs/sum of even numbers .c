#include<stdio.h>
int seven(int a[],int len)
{
    int sum=0,avg;
    for(int i=0 ;i<len;i++)
    {
        if( a[i] % 2 == 0)
        {
            sum += a[i];
            avg = sum/len;
        }
    }
    return avg;
}

int main()
{
    int n;
    printf("Enter total numbers");
    scanf("%d",&n);
    int a[n];
    printf("Enter 1 by one");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Average of the even numbers is %d",seven(a,n));
}