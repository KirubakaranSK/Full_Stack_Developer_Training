#include <stdio.h>

int avr(int a[],int l);

int getarry()
{
    int n,i;
    printf("enter the size of a list : ");
    scanf("%d",&n);
    int b[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    avr(b,n);
}

int main(){

    int getarray;


    getarry();

    return 0;
}

int avr(int a[],int l)
{
   float sum=0;
   int i;
   for(i=0;i<l;i++){
    sum=sum+a[i];

   }

   printf("%f",sum/l);


}
