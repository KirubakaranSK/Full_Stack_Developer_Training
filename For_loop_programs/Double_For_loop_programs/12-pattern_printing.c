/*

Input number of rows: 7

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1


*/

#include <stdio.h>
int main() {
   int n, c = 1,i, j;
   printf("Enter the number : ");
   scanf("%d", &n);
   for (i = 0; i < n; i++) 
   {
      for (j= 1; j <= n - i; j++)
         printf(" ");
      for (j = 0; j <= i; j++) 
      {
         if (j == 0 || i == 0)
            c = 1;
         else
            c = c * (i - j + 1) / j;
         printf("%d ", c);
      }
      printf("\n");
   }
   return 0;
}
