//Calculate the product of all elements in an array.

#include<stdio.h>
int main()
{
    int i,n,p=1;
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
    p=p*a[i];
    }
  printf("The Product of elements in an array: %d",p);

    return 0;

}