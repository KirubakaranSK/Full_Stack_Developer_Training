#include<stdio.h>
void main()  
 {
    int a,b,c;
    printf("Enter a  three sides of triangle");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && a==c)
    {
        printf("the given triangle is Equilateral");
    }
    else if(a==b && b!=c || a==c && a!=b || b==c && a!=c)
    {
        printf("the given triangle is Isosceles");
    }
    else
    {
        printf("The given triangle is Scalene");
    }
}