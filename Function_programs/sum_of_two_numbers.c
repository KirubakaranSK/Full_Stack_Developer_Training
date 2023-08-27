#include<stdio.h>

int sum(int a,int b)

{
    return a+b;

}


int main()
{

    int n,m;
    printf("enter the 1 number : ");
    scanf("%d",&n);
    printf("enter the 2 number : ");
    scanf("%d",&m);

    printf("sum = %d .",sum(m,n));



    return 0;
}