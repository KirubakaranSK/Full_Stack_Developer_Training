#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the work experience");
    scanf("%d",&n);
    printf("enter the person age");
    scanf("%d",&m);
    if(m<25 && n<1)
     printf(" entry level");
    else if((m>=25 && m<40) && (n>=1 && n<5))
     printf("junior");
    else if (m>=40 &&(n>=5 && n<=10))
     printf("senior");
    else
     printf("expert");
    return 0;

}