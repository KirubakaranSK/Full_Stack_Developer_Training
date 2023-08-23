/*

Input the number of rows: 5


    1
   232 
  34543
 4567654
567898765

*/


#include<stdio.h>
int main()
{
	int n, i, j, num = 1;
    printf("enter number : ");
    scanf("%d",&n);
	for ( j = 1 ; j <= n ; j++ )
	{
		num = j;
		for ( i = 1 ; i <= n-j ; i++ )
			printf(" ");

		for ( i = 1 ; i <= j ; i++ )
		{
			printf("%d", num);
			num++;
		}
		num-=2;
		for ( i = 1 ; i < j ; i++)
		{
			printf("%d", num);
			num--;
		}
		printf("\n");

	}

	return 0;
}
