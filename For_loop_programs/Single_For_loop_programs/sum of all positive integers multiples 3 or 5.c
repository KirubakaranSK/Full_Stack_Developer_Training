//for loop to find the sum of all positive integers less than 1000 that are multiples of 3 or 5.

#include<stdio.h>
int main()
{
    int n,i,sum=0;
  printf("Enter the range of the number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    
   if(i%3==0 && i%5==0)
   {
    sum+=i;
   }
  }
  printf("The Sum = %d",sum);
    return 0;

}