#include<stdio.h>
int main()
{
    float n;
    printf("enter the temperature in celsius");
    scanf("%f",&n);
    if(n<=37.5)
      printf(" not fever");
    else
      printf("fever");
    return 0;
}