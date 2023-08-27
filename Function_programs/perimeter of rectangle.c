#include<stdio.h>
int Prectangle(int a, int b)
{
    return (a+b)*2;
}
int main()
{
    int length,width;
    printf("Enter  length and width");
    scanf("%d %d",&length,&width);
    printf("%d",Prectangle(length,width));
    return 0;
}