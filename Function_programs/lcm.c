#include<stdio.h>
int lcm( int num,int num1)
{
    int m,i,num3=0;
    if(num>num1)
       m=num;
    else
       m=num1;
    for(i=2;i<=m;i++)
    {
        if((num%i ==0) && (num1%i==0))
           num3=i;
    }
    return (num*num1)/num3;
}
int main()
{
    int m,n;
    printf("enter the number 1and 2:  ");
    scanf("%d %d",&m,&n);
    printf("%d",lcm(m,n));
}
