/*

Input number of rows: 4

   1
  2 3
 4 5 6
7 8 9 10

*/



#include <stdio.h>
int main() {
   int i, n ,k = 0,a=1;
   printf("Enter the number : ");
   scanf("%d", &n);
   for (i = 1; i <= n; i++) {
      for (k = 1; k <= n - i; k++) {
         printf(" ");
      }
      for (k = 1; k <= i; k++) 
      {
         printf("%d ",a);
         a++;
      }
      printf("\n");
   }
   return 0;
}
