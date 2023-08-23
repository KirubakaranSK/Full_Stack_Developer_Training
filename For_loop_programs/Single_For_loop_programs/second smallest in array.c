//second smallest element in an array.

#include<stdio.h>
int main()
{
    int i,n,u;
    printf("Enter Size:");
    scanf("%d",&u);
    int arr[u];
    printf("Enter Elements:");
    for(i=0;i<u;i++)
    {
      scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(i=1;i<u;i++)
    {
        if(min>arr[i])
        {
            n=min;
            min=arr[i];
        }
        if(min<arr[i] && n>arr[i])
            n=arr[i];
    }
    
    printf("%d",n);
    return 0;
}