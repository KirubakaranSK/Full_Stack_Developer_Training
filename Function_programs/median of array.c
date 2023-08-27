#include<stdio.h>
float median( int a[],int n)
{
    if(n%2 ==0)
    {
        return (a[n/2]+a[(n/2)-1])/2.0;
    }
    else
    {
        return a[n/2];
    }
}
int* sort( int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a;
}
int main()
{
    int n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("%f",median(a,n));
}