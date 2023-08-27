#include<stdio.h>
int rotate( int a[],int len,int n){
    int i,k=0; 
    int b[len];
    for(i=n;i<len;i++)
    {
        b[k]=a[i];
        k++;
    }
    for(i=0;i<n;i++)
    {
        b[k]=a[i];
        k++;
    }
    printf("%d",k);
    for(i=0;i<k;i++)
    {
        printf("%d",b[i]);
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    int len=sizeof(a)/sizeof(a[0]);
    int n=2;
    rotate(a,len,n);
}