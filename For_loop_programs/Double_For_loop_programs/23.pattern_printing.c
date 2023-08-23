/*
n=5

0 1 2 3 4
1 0 1 2 3
2 1 0 1 2
3 2 1 0 1
4 3 2 1 0


*/


#include <stdio.h>
int main()
{
   int i,j,n;
   printf("enter the number  : ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	for(j=0;j<n;j++)
    {
       if (i < j)
       {
	       printf("%d ",j-i);
       }
       else
       {
           printf("%d ",i-j);
       }
    }
	printf("\n");
   
   }
   return 0;

}