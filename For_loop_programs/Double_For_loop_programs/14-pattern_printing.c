/*

Input number of rows: 5
    1
   121
  12321
 1234321
123454321

*/



#include <stdio.h>

void main()
{
   int i,j,n,a=0;
   printf("enter number : ");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
    
    for(j=1;j<=n-i;j++)
	       printf(" ");
    a=0;
    for(j=1;j<=2*i-1;j++)
        if(a < i)
        {
           a++;
           printf("%d",a);
        }
        else{
            a--;
            printf("%d",a);

        }
           
 
  
 
    printf("\n");
   }
}
