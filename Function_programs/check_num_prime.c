#include<stdio.h>
char* isprime()
{
    int i,n,f=0;
    printf("enter the numbers : ");
    scanf("%d",&n);
    for (i=2;i <= n/2;i++)
    { 
       if (n % i == 0)
       {
        f==1;
        break;
       }
    }
    if (f == 0)
        return "it is a prime.";
    else
        return "it is not a prime.";
    
    return 0;
}

int main()
{
    printf("%s\n",isprime());
    return 0;
}