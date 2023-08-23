#include <stdio.h>
void main()
{
   int i,n,sum=0;

   printf("Input number of terms : ");
   scanf("%d",&n);

   for(i=1;i<=n*2;i+=2)
   {
     printf("%d ",i);
     sum+=i;
   }
   printf("\nThe Sum of %d terms : %d \n",n,sum);
}
