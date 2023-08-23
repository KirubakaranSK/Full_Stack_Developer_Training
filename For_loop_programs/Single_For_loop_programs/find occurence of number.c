//find the index of the first occurrence of a given number.

#include<stdio.h>
int main()
{
   int n,i;
  printf("Enter Size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    int f;
    printf("Enter the number to find first occurence:");
    scanf("%d",&f);
    printf("The first Occurence of the given Number %d index is: ",f);
    for(i=0;i<n;i++)
    {
        if(a[i]==f)
        {
        printf("%d",i);
        break;
        }
    }

    return 0;


}