#include<stdio.h>
void main() {
    int year;
    printf("Enter a year");
    scanf("%d",&year);
    if(year % 100==0)
    {
        printf("Given year is century year");
    }
    else
    {
        printf("Given year is not a century year");
    }
}