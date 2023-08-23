#include<stdio.h>

int main()
{
    int a,b,i;
    printf("starting values ; ");
    scanf("%d",&a);
    printf("Ending values ; ");
    scanf("%d",&b);
    for(i=a;i<=b;i++){
        printf("%d << %c",i,i);
        printf("\n");
    }

    return 0;
}