#include<stdio.h>
void main()
{
    char a;
    printf("Enter a character");
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U' )
    {
        printf("It is a vowel");
    } 
    else
    {
        printf("it is not a vowel");
    }
}