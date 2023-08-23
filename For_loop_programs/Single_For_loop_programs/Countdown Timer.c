//countdown timer using a for loop.

#include <stdio.h>
int main()
 {
    int duration = 10; 

    printf("Countdown Timer:\n");

    for (int i = duration; i >= 0; i--) 
    {
        printf("%d\n", i);
        sleep(1); 
    }
    printf("Time's up!\n");
    return 0;
}
