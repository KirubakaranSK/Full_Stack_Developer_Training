#include<stdio.h>
int main()
{
    int i,j,k,n;
    int a[n];
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<=n;i++){
    scanf("%d",&a[i]);
    }
       for(i=0;i<n;i++)
       {
        for(j=i+1;j<n;)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k] = a[k+1];
                }
                n--;
            }
            else
            {
               j++;
            }
        }
       }
        printf("After removing Duplicates:");
            for(i=0;i<n;i++)
            {
                printf("%d",a[i]);
            }
    printf("\n");
        return 0;
}