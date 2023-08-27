#include<stdio.h>
char* onlydigits(char a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=48 && a[i]<=57)
          count++;
    }
    if(count==n)
      return "string contain only interger";
    return"string contain not only interger";
}
int main()
{
    char ch[20],i;
    printf("enter the string: ");
    scanf("%s",ch);
    for(i=0;ch[i];i++);
    printf("%s",onlydigits(ch,i));
}