#include<stdio.h>
int main()
{
    int i,n,s=9,r=9;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("9");
    }
    else
  {
    printf("9+");
    for(i=1;i<n;i++)
    {
        s=(s*10+9);
        printf("%d+",s);
        r=r+s;
    }      
    printf("\nSum of Series:");
    printf("%d\n",r);
  }
    return 0;
}