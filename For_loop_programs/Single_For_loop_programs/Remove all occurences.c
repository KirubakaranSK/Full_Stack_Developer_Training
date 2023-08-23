//Remove all occurrences of a specific element from a list.

#include<stdio.h>
int main()
{
    int n,i,k;
    printf("Enter Size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("Enter the element to remove:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i] != k)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}