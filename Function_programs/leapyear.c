#include<stdio.h>
char* leapyear( int num){
    if((num%400==0)&&(num%4 ==0))
    {
        printf("leapyear");
    }
    else
    {
        printf("not leapyear");
    }
}
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    leapyear(n);
}