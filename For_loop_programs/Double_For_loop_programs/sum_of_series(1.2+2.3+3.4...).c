// sum of serirs 1.2+2.3+3.4+4.5+....

#include<stdio.h>
int main ()
{
    float a,j=0,r=0;
    int i,n;
    printf("enter the numbers of terms : ");
    scanf("%d",&n);
   
    for (i=1;i <= n;i++)
    {
        if( i < 9)
            a=0.1;
        else
            a=0.01;
        j=i+((i+1)*a);
        printf("%.2f",j);
        if(i != n)
            printf("+");
        r+=j;
    }

    printf("\nsum of the series : %f",r);
    return 0;
}
