#include<stdio.h>
char* palidrome(char a[],int len)
{ 
    int j=len-1;
    for(int i=0;i<len/2;i++)
    {
          if(a[i]!=a[j])
            return "not palidrome";
        j--;
    }
    return "palidrome";
}
int main()
{
    char ch[20],len=0,i=0;
    printf("enter the string: ");
    scanf("%s",ch);
    for(i=0;ch[i];i++);
    printf("%s",palidrome(ch,i));
}