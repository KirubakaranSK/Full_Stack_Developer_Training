#include <stdio.h>
int main() {
    int num, num1;
    printf("Enter an integer: ");
    scanf("%d %d", &num,&num1);

    
    if(num>num1)
        printf("%d is larger", num);
    else
        printf("%d is larger", num1);
    
    return 0;
}
