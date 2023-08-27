#include<stdio.h>
int common(int a[],int b[],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i] == b[j])
            {
               printf("%d ",a[i]);
               break;
            }
    }
}
}
int main()
{
    int m,n,i;
    printf("enter the size of first array ");
    scanf("%d",&m);
    int a[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the size of second array ");
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    common(a,b,m,n);
    return 0;
}
