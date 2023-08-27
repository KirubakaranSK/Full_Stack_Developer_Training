
#include <stdio.h>

void asc(int a[],int len)
{
    
    int count = 0;
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(a[i]<=a[j])
            {
                count = 1;
            }
            else
            {
                count = 0;
            }
        }
    }
    if(count == 1)
    {
        printf("the list is in ascending order");
    }
    else
    {
        printf("the list is not in ascending order");
    }
}

void main()
{
	int a[]={1,3,4,2,6};
	int len=sizeof(a);
	asc(a,len);
}
