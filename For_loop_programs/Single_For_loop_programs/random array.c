//for loop to initialize and populate a two-dimensional array with random values in C

#include <stdio.h>
int main() {
    int array[3][4];

    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            array[i][j] = rand() % 100; 
        }
    }

    printf("Random Array between 1 - 100 integers:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", array[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
