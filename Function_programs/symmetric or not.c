#include<stdio.h>
char* symmetric( char a[],int len)
{
    int i,j;
    if(len%2==0)
    {
        j=len/2;
        for(i=0;i<len/2;i++)
        {
            if(a[i]!=a[j])
            {
              return "not symmetric";
            }
            j++;
        }
        return "symmetric";
    }
    else
    {
      j=(len/2)+1;
      for(i=0;i<len/2;i++)
        {
            if(a[i]!=a[j])
            {
              return "not symmetric";
            }
            j++;
        }
        return "symmetric";
    }
}
int main()
{
   char ch[20];
   int i;
   printf("enter the string ");
   scanf("%s",ch);
   for(i=0;ch[i];i++);
   printf("%s",symmetric(ch,i));
}