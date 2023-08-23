/*

Input the number of Letters (less than 26) in the Pyramid: 5
       A
     A B A
    A B C B A
  A B C D C B A
A B C D E D C B A

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
           printf("%c ",a+64);
        }
        else{
            a--;
            printf("%c ",a+64);

        }
           
 
   printf("\n");
   }
}
