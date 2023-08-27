#include<stdio.h>
float volume(int n)
{
    return (4*3.14*n*n*n)/3;
}
int main()
{
    int a;
    printf("enter the radius ");
    scanf("%d",&a);
    printf("%f",volume(a));
}