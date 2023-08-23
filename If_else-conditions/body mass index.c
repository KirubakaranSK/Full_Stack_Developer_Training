#include <stdio.h>
void main() {
    float n,m,b;
    printf("Enter an weight(kg) and height(meter): ");
    scanf("%f %f", &n,&m); 
    b=n/(m*m);
    if(b <18.5)
        printf("underweight");
    else if(b>=18.5 && b<=24.9)
        printf("normal weight");
    else if(b>24.9 && b<=29.9)
        printf("overweight");
    else
        printf("obese");
    
}
