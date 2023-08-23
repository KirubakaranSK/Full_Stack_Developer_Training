#include<stdio.h>

int main()
{
    int i,l;
    char n[50];
    printf("enter the string : ");
    scanf("%s",&n);
    for(l=0;n[l];l++);

    for(i=l-1;i>=0;i--)
    {
        printf("%c",n[i]);
    }
    return 0;
}