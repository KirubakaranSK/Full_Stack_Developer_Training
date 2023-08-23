
#include <stdio.h>

int main() {
    
    int num, num1,num2;
    printf("enter the number ");
    scanf("%d %d %d",&num,&num1,&num2);
    if((num<num1)&&(num<num2))
    {
        printf("%d",num);
        if(num1<num2)
           printf("%d %d",num1, num2);
        else
           printf("%d %d",num2, num1);
    }
    else if ((num1<num)&&(num1<num2))
    {
        printf("%d",num1);
        if(num<num2)
           printf("%d %d",num, num2);
        else
           printf("%d %d",num2, num);
    }
     else if ((num2<num)&&(num2<num1))
    {
        printf("%d",num2);
        if(num<num1)
           printf("%d %d",num, num1);
        else
           printf("%d %d",num1, num);
    }

    return 0;
}