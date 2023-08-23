#include<stdio.h>
void main()
{
    float temp;
    float cel,fhr;
    int choice;
    printf("Enter temperature");
    scanf("%f",&temp);
    printf("1.Fahrenheit to celsius \n 2.celsius to fahrenheit");
    scanf("%d",&choice);
    if(choice==1)
    {
        cel = ((temp - 32.0) * 5.0 / 9.0);
        printf("the fahrenheit of %f is %f celsius",temp,cel);
    }
    else
    {
        fhr = (temp * 9.0 / 5.0)+32;
        printf("the celsius of %f is %f fahrenheit",temp,fhr);
    }
}