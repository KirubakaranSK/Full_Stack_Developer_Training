/*Print the numbers from 1 to 100, but for multiples of 3, print "Fizz," for multiples of 5, print "Buzz,"
and for multiples of both 3 and 5, print "FizzBuzz."*/

#include<stdio.h>
int main()
{
int n,i;
printf("Enter the range of the number:");
scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    
   if(i%3==0 && i%5==0)
   {
    printf("Fizz Buzz\n");
   }
    else if(i%3==0)
    {
        printf("Fizz\n");
    }
    else if(i%5==0)
    {
        printf("Buzz\n");
    }
   else
    {
        printf("%d\n",i);
    }
  }
    return 0;

}