#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<=n*2;i++)
    {
        printf("%d\n",i);
        sum+=i;
    }
printf("Sum of the Numbers:");
printf("%d",sum);
return 0;
}