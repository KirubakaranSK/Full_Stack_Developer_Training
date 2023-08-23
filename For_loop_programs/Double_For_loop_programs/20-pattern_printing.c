/*

Input number of rows: 5
    1
   2 1
  3 2 1
 4 3 2 1
5 4 3 2 1

*/


#include<stdio.h>
int main()
{
	int n, i, j;
    printf("enter number : ");
    scanf("%d",&n);
	for ( j = 1 ; j <= n ; j++ )
	{
		for ( i = 1 ; i <= n-j ; i++ )
			printf(" ");

		for ( i = j ; i > 0 ; i-- )
		{
			printf("%d ",i);
			
		}
        printf("\n");
    }
    return 0;
}
