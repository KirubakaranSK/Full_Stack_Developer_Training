#include <stdio.h>
int main() {
    int age;
    printf("Enter an age: ");
    scanf("%d", &age); 
    if(age <18)
        printf("child");
    else if(age>=18 && age<65)
        printf("adult");
    else
        printf("senior");
    
    return 0;
}
