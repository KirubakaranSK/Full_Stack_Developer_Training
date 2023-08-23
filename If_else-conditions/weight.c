#include <stdio.h>
void main() {
    float n;
    printf("Enter an weight: ");
    scanf("%f", &n); 
    if(n <18.5)
        printf("underweight");
    else if(n>=18.5 && n<=24.9)
        printf("normal weight");
    else if(n>24.9 && n<=29.9)
        printf("overweight");
    else
        printf("obese");
    
}
