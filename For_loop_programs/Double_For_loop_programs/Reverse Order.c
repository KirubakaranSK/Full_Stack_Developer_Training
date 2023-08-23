// Number in reverse order.

#include<stdio.h>
int main()
{
int i,n,rev=0,rem;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;n!=0;i++)
{
    rem =n %10;
    rev=rev*10+rem;
    n=n/10;
}
printf("%d",rev);
    return 0;
}