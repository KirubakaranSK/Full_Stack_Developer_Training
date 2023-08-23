/*

Input number of rows: 5


5 4 3 2 1
4 3 2 1
3 2 1
2 1
1


*/


#include <stdio.h>
int main()
{
   int i,j,n;
   printf("enter the number  : ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	for(j=n-i;j>0;j--)
	   printf("%d ",j);
	printf("\n");
   }

   return 0;
}