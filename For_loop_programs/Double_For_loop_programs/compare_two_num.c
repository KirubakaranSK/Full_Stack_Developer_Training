#include<stdio.h>
int main()
{
	int n, a,b;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter secound number : ");
    scanf("%d",&b);

    if( a == b)
        printf("%d and %d are equal.",a,b);
    else if (a > b)
        printf("%d is greater than  %d.",a,b);
    else
        printf("%d is greater than %d.",b,a);
    

    return 0;

}