//Create a program using a for loop to display the multiplication table of a given integer.

#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", n);

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
