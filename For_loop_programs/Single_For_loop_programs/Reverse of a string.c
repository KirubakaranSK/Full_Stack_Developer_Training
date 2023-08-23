#include<stdio.h>
int main()
{
    char str[100];
    int i,len;
printf("Enter the String:");
scanf("%s",&str);
  len=strlen(str);
for(i=len-1;i>=0;i--)
{
    printf("%c",str[i]);
}

    return 0;
}