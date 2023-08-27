#include<stdio.h>

int* reverse(int a[],int l,int z[])

{
    int k=0;
    for(int i=l-1 ;i>=0;i--)
    {
        z[k]=a[i];
        k++;
    }
   
    return z;

}


int main()
{

    int n,i;
    
    printf("enter the size of a list : ");
    scanf("%d",&n);

    int b[n],z[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    reverse(b,n,z);
    for(i=0;i<n;i++)
    {
        printf("%d",z[i]);
    }


    return 0;

}
