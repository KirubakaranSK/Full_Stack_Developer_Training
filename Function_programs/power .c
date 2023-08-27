#include<stdio.h>
int power(int a,int b)
{
 int t=1;
 for(int i=1;i<=b;i++)
 {
    t = t*a;
 }
 return t;
}
 int main()
 {
    int a,b;
    printf("Enter a base number and exponent");
    scanf("%d %d",&a,&b);
    printf("%d",power(a,b));
 }