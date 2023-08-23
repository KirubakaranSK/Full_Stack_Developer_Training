#include<stdio.h>
void main()
{
    char a;
    printf("Enter a character ");
    scanf("%c",&a);
    if(a >= 'a' && a <='z' || a>='A' && a<='Z') 
    {
        printf("It is a Alphabet");
    }
    else if(a>='0' && a<='9')
    {
        printf("it is a Digit"); 
    }
    else
    {
        printf("it is a Special charcater");
    }
}