#include<stdio.h>
void main() {
    int n;
    printf("Enter a number of odd or even");
    scanf("%d",&n);
    if(n%2 ==0)
    {
        printf("Given number is even %d",n);
    }
    else
    {
        printf("Given number is odd %d",n);
    }
}