//sum of all integer between 100 and 200 which are divisible by 9.

#include <stdio.h>

int main() {
    int s = 0;

    printf("Numbers between 100 and 200, divisible by 9:\n");
    
    for (int i = 100; i <= 200; ++i) {
        if (i % 9 == 0) {
            printf("%d ", i);
            s += i;
        }
    }

    printf("\nThe sum : %d\n", s);

    return 0;
}
