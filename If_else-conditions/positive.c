#include<stdio.h>
void main() {
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Given number is Negative %d",n);
    }
    else if(n>0)
    {
        printf("Given number is Positive %d",n);
    }
    else
    {
        printf("Given number equal to zero");
    }
}