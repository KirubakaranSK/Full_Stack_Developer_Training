// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    if((num%400==0)&&(num%4 ==0))
    {
        printf("leapyear");
    }
    else
    {
        printf("not leapyear");
    }

    return 0;
}