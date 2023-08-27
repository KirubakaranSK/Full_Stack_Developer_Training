#include<stdio.h>

char* odd_even(int a)

{
    if (a%2 == 0)
        return "even";
    return"odd";
}


int main()
{

    int n;
    printf("enter the 1 number : ");
    scanf("%d",&n);

    printf("%s",odd_even(n));

    return 0;
}