#include <stdio.h>

int main() {
    int st, n, cd;

    printf("Starting number: ");
    scanf("%d", &st);

    printf("Number of items : ");
    scanf("%d", &n);

    printf("common difference number: ");
    scanf("%d", &cd);

    printf("The Sum of the A.P. series are :\n");

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int term = st + (i * cd);
        printf("%d", term);

        sum += term;
        
        if (i != n - 1) {
            printf(" + ");
        }
    }

    printf(" = %d\n", sum);

    return 0;
}
