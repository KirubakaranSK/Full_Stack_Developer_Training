#include<stdio.h>
int main()
{
    int n;
    printf("enter the credit score ");
    scanf("%d",&n);
    if(n<600)
      printf("poor credit");
    else if(n>600 &&n<=699)
      printf("fair credit");
    else if(n>=700 && n<=799)
      printf("good credit");
    else
      printf("excellent");
    return 0;
}