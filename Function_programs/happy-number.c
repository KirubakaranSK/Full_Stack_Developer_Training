#include <stdio.h>    

int isHappyNumber(int num)
{    
    int rem = 0, sum = 0;    

    while(num > 0){    
        rem = num%10;    
        sum = sum + (rem*rem);    
        num = num/10;    
    }    
    return sum;    
}    
        
int main()    
{    
    int num ;
    printf("enter the number : ");
    scanf("%d",&num);    
    int r = num;    
        
    while(r != 1 && r != 4){    
        r = isHappyNumber(r);    
    }     
    if(r == 1)    
        printf("%d is a happy number", num);    
    else if(r == 4)    
        printf("%d is not a happy number", num);     
     
    return 0;    
}    