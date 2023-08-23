#include<stdio.h>
#include<string.h>
int main()
{
    int num, num1,m;
    printf(" enter the number");
    scanf("%d %d",&num,&num1);
    printf("  choose the number 1. addition 2.subraction 3. multipication 4.division\n");
    scanf("%d", &m);
    if(m==1)
        printf("%d",num+num1);
    else if (m==2)
        printf("%d",num-num1);
    else if (m==3)
        printf("%d",num*num1);
    else if (m==4)
        printf("%d",num/num1);
    else
      printf("give correct");
    return 0;
}