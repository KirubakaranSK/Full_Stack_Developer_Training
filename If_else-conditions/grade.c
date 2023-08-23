#include <stdio.h>
int main() {
    float num;
    printf("Enter the mark in percentage ");
    scanf("%2f " ,&num);

    
    if(num>= 60)
        printf("pass");
    else
        printf("fail");
    
    return 0;
}
