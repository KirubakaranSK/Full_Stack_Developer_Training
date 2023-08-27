#include<stdio.h>
int Atriangle(int height, int base)
{
    int  A=(base*height)/2;
    printf("%d",A);
    return A;
}
int main()
{
    int base,height;
    printf("Enter base and height of triangle");
    scanf("%d %d",&base,&height);
    Atriangle(base,height);
    return 0;
}