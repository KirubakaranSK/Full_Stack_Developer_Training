/*

Input number of rows: 5
black-white-black-white-black
white-black-white-black-white
black-white-black-white-black
white-black-white-black-white
black-white-black-white-black


*/




#include<stdio.h>
int main()
{
	int n, i, j;
    printf("enter number : ");
    scanf("%d",&n);
	for ( j = 1 ; j <= n ; j++ )
	{
		
		for ( i = 1 ; i <= n ; i++ )
		{
            if((i+j)%2 == 0)
			    printf("black");
            else
                printf("white");
            if(i != n)
                printf("-");
			
		}
        printf("\n");
    }
    return 0;
}
