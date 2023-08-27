#include<stdio.h>
#include<string.h>
int validemail(char a[],char b[],int len,int len1)
{
    int found=0,k=len-1;
    for(int i=len1;i>0;i--)
    {
       if(b[i] != a[k])
       {
        found=1;
        break;
       }
       k--;
    }
    if(found == 0)
    {
        printf("Valid Email");
    }
    else
    {
        printf("Not a valid Email");
    }
}
 int main()
{
    char a[20],b[]="@gmail.com";
    int i,len=0,len1=9;
    printf("Enter a Mail");
    scanf("%s",&a);
    //printf("%s",a);
    for(i=0; a[i];i++);
    //len=sizeof(a)/sizeof(a[0]);
   // printf("%d",i);
    //printf("\n%d",i);
    validemail(a,b,i,len1);
return 0;
}