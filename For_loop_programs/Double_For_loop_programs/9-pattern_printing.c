/*

Input number of rows: 5
   *
  ***
 *****
*******

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
      for (k = 1; k <= a; k++) 
      {
         printf("*");
    
      }
      a+=2;
      printf("\n");
   }
   return 0;
}