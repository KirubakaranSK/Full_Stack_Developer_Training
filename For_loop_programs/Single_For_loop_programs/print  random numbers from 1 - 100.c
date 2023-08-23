//Generate a list of random integers between 1 and 100.

#include <stdio.h>
int main() {
    int numCount,min,max;
    printf("Enter the Starting Range:");
    scanf("%d",&min); 
    printf("Enter the Ending Range:");
    scanf("%d",&max); 
    printf("Enter the Number Count Range from starting to end:");
    scanf("%d",&numCount); 

    srand(time(NULL));

    printf("Generated random integers between %d and %d:\n", min, max);

    for (int i = 0; i < numCount; i++) 
    {
        int randomNumber = rand() % (max - min+ 1) + min;
        printf("%d ", randomNumber);
    }

    printf("\n");

    return 0;
}
