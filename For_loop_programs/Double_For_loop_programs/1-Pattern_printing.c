/*
n=5;

*****
*****
*****
*****
*****

*/ 

#include <stdio.h>
int main() {
   int i, j, n;
   printf("Enter the number of rows and columns : ");
   scanf("%d", &n);
   for (i = n; i >= 1; --i) {
      for (j = 1; j <= n;j++) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
