#include<stdio.h>
void main()
{
    char a;
    printf("Enter a character");
    scanf("%c",&a);
    if((a >= 'a' && a <='z') || (a>='A' && a<='Z'))
    {
        printf("It is a Character");
    }
    else
    {
        printf("it is not a Character");
    }
}