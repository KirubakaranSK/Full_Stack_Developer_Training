/*

Input number of rows: 5
1
01
101
0101
10101

*/




#include <stdio.h>

void main()
{
   int i,j,n,a,b;
   printf("Input number : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     if(i%2==0)
     { 
        a=1;
        b=0;
     }
     else
     { 
        a=0;
        b=1;
     }
    for(j=1;j<=i;j++)
    {
	 if(j%2==0)
	    printf("%d",a);
	 else
	    printf("%d",b);
    }
     printf("\n");
   }
} 
