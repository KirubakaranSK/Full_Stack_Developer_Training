//Count the number of negative numbers in a list of integers.

#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter Size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
            if(a[i] < 0)
            {
               count++;
            }
    }
    printf("%d",count);
    return 0;
}