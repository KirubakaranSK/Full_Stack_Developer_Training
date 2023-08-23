#include<stdio.h>
void main() 
{
    int monthno;
    printf("Enter a number");
    scanf("%d",&monthno);
    if(monthno == 1 || monthno == 3 || monthno == 5 || monthno == 7 || monthno == 8 || monthno == 10 || monthno == 12)
    {
        printf("31 days");
    }
    else if(monthno == 2 || monthno == 4 || monthno == 6 || monthno == 9 || monthno == 11)
    {
        printf("30 days");
    }
    else
    {
        printf("Enter within 1 to 12 numbers");
    }
}