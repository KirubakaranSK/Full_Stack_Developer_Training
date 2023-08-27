#include<stdio.h>

int max(int a[],int l)

{
    int max=a[0];
    for(int i=1 ;i<l;i++)
    {
        if(max < a[i])
           max=a[i];
    }
    
    return max;

}


int main()
{

    int n,i;
    printf("enter the number : ");
    scanf("%d",&n);

    int m[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    
    printf("%d\n",max(m,n));

    return 0;

}