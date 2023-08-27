#include<stdio.h>

float area(int a)

{
    float r=3.14;
    return r*a*a;
}


int main()
{

    int n;
    printf("enter the radius of the circle : ");
    scanf("%d",&n);

    printf("%.2f",area(n));

    return 0;
}