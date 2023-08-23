#include<stdio.h>
int main()
{
    int i,j,k,n[]={1,2,3,4};
    int count=0;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(n[i] != n[j])
            {
                for(k=0;k<4;k++)
                {
                    if(n[i] != n[k] && n[j] != n[k])
                    {
                        printf("%d%d%d ",n[i],n[j],n[k]);
                        count++;
                    }
                }
            }
        }
    }
    printf("\nTotal number of combination : %d.",count);
    return 0;
}