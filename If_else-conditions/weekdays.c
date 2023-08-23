#include<stdio.h>
void main() 
{
    int weekno;
    printf("Enter a number");
    scanf("%d",&weekno);
    if(weekno==1)
    {
        printf("Monday");
    }
    else if(weekno==2)
    {
        printf("Tuesday");
    }
    else if(weekno==3)
    {
        printf("Wednesday");
    }
    else if(weekno==4)
    {
        printf("Thursday");
    }
    else if(weekno==5)
    {
        printf("Friday");
    }
    else if(weekno==6)
    {
        printf("Saturday");
    }
    else
    {
        printf("Enter within 1 to 7 numbers");
    }
}