#include <stdio.h>

int main()
{
    int n,l=0,b;

    printf("Enter any number : ");
    scanf("%d", &n);
    int m=n;

    while(m != 0)
    {
        l=l*10+(m%10);
        m/=10;

    }
   
   
    while (l != 0)
    {
        b= l%10 ? 0 : 1 ;
        printf("%d",b);
        l/=10;

    }
    
    return 0;
}