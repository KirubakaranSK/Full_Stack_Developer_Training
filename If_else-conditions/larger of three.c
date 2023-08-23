#include <stdio.h>
int main() {
    int num, num1,num3;
    printf("Enter an integer: ");
    scanf("%d %d %d", &num,&num1,&num3);

    
    if((num>num1) && (num>num3))
        printf("%d is larger", num);
    else if (num1>num3)
        printf("%d is larger", num1);
    else
        printf("%d is larger", num3);
    
    return 0;
}
