/*

Input the number of rows:5


        1
      1 2 1
    1 2 4 2 1
  1 2 4 8 4 2 1
1 2 4 8 16 8 4 2 1

*/


#include <stdio.h>

 

int main() {

    int n,v,j;

    printf("Input the num : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {

         v = 1;


        for ( j = 0; j < n - i - 1; j++) {

            printf("  ");

        }

        for (j = 0; j <= i; j++) {

            printf("%d ", v);

            v *= 2;

        }
        v /= 2;
        for (j = 0; j < i; j++) {

            v /= 2;

            printf("%d ", v);

        }
        printf("\n");

    }
    return 0;

}
