/*

Input number of rows: 5
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5

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
         printf("%d ",i);
        
      }
      printf("\n");
   }
   return 0;
}
