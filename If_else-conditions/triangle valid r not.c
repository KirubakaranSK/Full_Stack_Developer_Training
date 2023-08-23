#include<stdio.h>
void main()  
 {
    int a,b,c;
    printf("Enter a  three sides of triangle");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c==180)
    {
        printf("Triangle Valid");
    }
    else
    {
        printf("Not a valid Triangle");
    }
}