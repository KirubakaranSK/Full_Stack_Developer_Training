#include<stdio.h>
int decitobin(int a)
{
    int k=0,b;
    int bno[k];
    for(int i=a;i>0;i=i/2)
    {
      b=i%2;
      bno[k]=b;
      k++;
    }
    rev(bno,k);
}
int rev(int arr[],int k)
{
    for(int i=k-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}

int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    decitobin(a);
}