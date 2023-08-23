#include <stdio.h>

int main()
{
    int n,l=0,b,o=0,a,t=0;

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
        o=o*10+b;
        l/=10;

    }
    int z =1;
    while (o != 10)
    {
        a=o%10;
        
        if(a==1)
        {
            if(z)
            {
                t=t*10+0;
            }
               
            
        }
    }
    
    
    return 0;

}