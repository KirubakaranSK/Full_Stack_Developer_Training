/*

Input the number of rows: 5

12345
2345
345
45
5

*/



#include <stdio.h>
void main()
{
   int i,j,n;
   printf("enter the number  : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
	for(j=i;j<=n;j++)
	   printf("%d",j);
	printf("\n");
   }
}