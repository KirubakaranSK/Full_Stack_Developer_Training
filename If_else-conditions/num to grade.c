#include<stdio.h>
void main() {
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num>=90)
    {
        printf("A grade");
    }
    else if(num>=80)
    {
        printf("B grade");
    }
    else
    {
        printf("C grade");
    }
}