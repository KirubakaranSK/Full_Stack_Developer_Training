#include<stdio.h>
int main()
{
	int n,l=0,s=0;
    printf("enter number : ");
    scanf("%d",&n);
    printf("last digit : %d",n%10);
    printf("\n");
    while (n>0)
    {
        l=n%10;
        s=s+l;
        n/=10;

    }
    printf("first digit : %d",l);
    printf("\n");
    printf("sum of digits : %d",s);


return 0;
}