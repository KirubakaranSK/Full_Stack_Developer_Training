#include<stdio.h>
void main()
{
    int s1,s2,s3;
    printf("Enter three sides of triangle");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1+s2>=s3 || s1+s3>=s2 || s2+s3>=s1)
    { 
        printf("Valid Triangle");
    }
    else
    {
        printf("Not a valid Triangle");
    }
}