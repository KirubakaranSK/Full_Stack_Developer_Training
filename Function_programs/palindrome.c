#include <stdio.h>

char* palindrome(char a[]);

int main()
{
    char n[50];
    printf("enter the string : ");
    scanf("%s",&n);

    printf("%s",palindrome(n));

    return 0;

}

char* palindrome(char a[])
{
    int l,i,j;
    for(l=0;a[l];l++);
    j=l-1;
    for(i=0;i<l/2;i++)
    {
        if(a[i] != a[j])
            return "not a palindrome";
        j--;
     
    }
    return "it is palindrome";

}