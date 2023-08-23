/*

Input number of rows: 7


1234567654321
 12345654321
  123454321
   1234321
    12321
     121
      1

*/



#include <stdio.h>

void main()
{
   int i,j,n,a=0;
   printf("enter number : ");
   scanf("%d",&n);
   for(i=n;i>0;i--)
   {
    
    for(j=1;j<=n-i;j++)
	       printf(" ");
    a=0;
    for(j=1;j<=2*i-1;j++)
        if(j <= i)
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
