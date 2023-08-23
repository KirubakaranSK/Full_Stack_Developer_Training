#include<stdio.h>
int main()
{
	int n, i,l=1;
    printf("enter number : ");
    scanf("%d",&n);
    printf("last digit : %d",n%10);
    printf("\n");
    while (n>0)
    {
        l=n%10;
        n/=10;

    }
    printf("first digit : %d",l);


return 0;
}