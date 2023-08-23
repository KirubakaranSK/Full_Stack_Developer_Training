#include<stdio.h>
int main()
{
	int n,l=0,s=1;

    printf("enter number : ");
    scanf("%d",&n);


    while (n>0)
    {

        l=n%10;
        s=s*l;
        n/=10;

    }
  
    printf("product of digits : %d",s);


return 0;
}