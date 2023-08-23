//Given two lists, find the common elements and store them in a new list.

#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    printf("Enter Size:");
    scanf("%d",&n);
    int a[n],c[n];
    printf("Enter Elements:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    int b[n];
    printf("Enter Elements:");
    for(j=0;j<n;j++)
    {
      scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        if(a[i]==b[j])
    {
        c[k]=a[i];
        k++;
    }
    }
    
    }
    printf("Common Elements:\n");
    for(i=0;i<k;i++)
        {
          printf("%d ",c[i]);
        }
    return 0;
}