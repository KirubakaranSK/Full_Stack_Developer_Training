#include<stdio.h>
int main()
{
    float s=0;
    int i,n;
    float avg=0;
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
    s=s+a[i];
    }
    avg=s/6;
     printf("%f",avg);
    return 0;
}