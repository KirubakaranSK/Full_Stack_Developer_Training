#include<stdio.h>

int* sort(int a[],int n)

{

    int i,j,temp;

    for(i=0;i<n;i++)

    {
        for(j=i+1;j<n;j++)

        {

            if(a[i]>a[j])

            {

                temp=a[i];

                a[i]=a[j];

                a[j]=temp;

            }
        }
    }
    return a;
}

int unique(int a[],int len)

{

    int i;

    sort(a,len);

    int j=0;
    for(i=1;i<len;i++)

    {

        if(a[i] != a[j])

        {
            j++;
            a[j]=a[i];

        }

    }

    for(i=0;i<=j;i++)

    {

        printf("%d",a[i]);

    }

}

int main()

{

    int a[]={1,2,1,3,4},i=5;

    unique(a,i);

    return 0;

}