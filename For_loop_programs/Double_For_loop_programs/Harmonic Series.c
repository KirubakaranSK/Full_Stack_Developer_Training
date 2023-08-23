#include <stdio.h>

int main() {
    int n;
    double harmonicSum = 0.0;

    printf("Enter the number of terms in the harmonic series: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        printf("1/%d+", i);
        harmonicSum += 1.0 / i;
    }
printf("\n");
    printf("Harmonic Series sum for %d terms: %lf\n", n, harmonicSum);

    return 0;
}
