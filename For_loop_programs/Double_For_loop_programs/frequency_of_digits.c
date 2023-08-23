#include <stdio.h>
int main() 
{
    int i, n ,k = 0,a[50],c,j;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        a[k]=i;
        k++;
        n/=10;

    }

    for(i=0;i< 10;i++)
    {
        c=0;

        for(j=0;j<k;j++)
        {
            if(i == a[j])
            {
                c++;
                
            }

        }
        printf("The frequency of %d = %d .",i,c);
        printf("\n");

    }

    return 0;
}