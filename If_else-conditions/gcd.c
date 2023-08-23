#include<stdio.h>
int main()
{
    int num,num1,m,i,num3=0;
    printf(" enter the number ");
    scanf("%d %d",&num,&num1);
    if(num>num1)
       m=num;
    else
       m=num1;
    for(i=2;i<=m;i++)
    {
        if((num%i ==0) && (num1%i==0))
            num3=i;
    }
    printf("%d",num3);
}
