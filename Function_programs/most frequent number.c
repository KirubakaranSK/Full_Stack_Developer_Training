
#include <stdio.h>
int frequent(int a[], int len)
{
    int i, j,count,temp=0,y;
    for (i = 0; i < len ; i++)
    {
        count=0;
        for (j = i + 1; j < len; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        if(count>=temp)
        {
            y=a[i];
            temp=count;
        }
    }
    printf("%d",y);
}
 
int main()
{
    int s[] = { 6,4, 2, 4, 5, 2, 3, 1,4 };
    int a = sizeof(s) / sizeof(s[0]);
    frequent(s, a);
    return 0;
}