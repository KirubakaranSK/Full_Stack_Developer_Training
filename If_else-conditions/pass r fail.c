#include<stdio.h>
void main() {
    int num;
    printf("Enter a grade"); 
    scanf("%d",&num);
    if(num>=50)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }
}