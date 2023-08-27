#include<stdio.h>
int sort(int a[],int n)
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
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8,0};
    int x=sizeof(a)/sizeof(a[0]);
    int y=sizeof(b)/sizeof(b[0]);
    int m=x+y;
    int i;
    for(i=0;i<y;i++)
    {
        a[x+i]=b[i];   
    }
    sort(a,m);
}