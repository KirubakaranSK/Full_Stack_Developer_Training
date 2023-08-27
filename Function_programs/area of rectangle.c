#include<stdio.h>
int rectangle(int b,int h)
{
    return b*h;
}
int main()
{
    int m,n;
    printf("enter the breath and height ");
    scanf("%d %d",&m,&n);
    printf("%d",rectangle(m,n));
}