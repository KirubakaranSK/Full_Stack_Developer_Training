/*

Input number of rows (half of the diamond): 5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/


#include <stdio.h>

int main()
{
   int i,j,n;
   printf("enter the number :");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
     for(j=1;j<=n-i;j++)
       printf(" ");
     for(j=1;j<=2*i-1;j++)
       printf("*");
     printf("\n");
   }
 
   for(i=n-1;i>=1;i--)
   {
     for(j=1;j<=n-i;j++)
        printf(" ");
     for(j=1;j<=2*i-1;j++)
        printf("*");
     printf("\n");
   }
   return 0;
}
