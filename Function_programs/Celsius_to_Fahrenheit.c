#include<stdio.h>

float cels_to_fahren(float a)

{
    float r=9/5;
    return (a*r+32);
}


int main()
{

    float n;
    printf("enter the celsius  : ");
    scanf("%f",&n);

    printf(" the fahrenheit is : %.2f",cels_to_fahren(n));

    return 0;
    
}