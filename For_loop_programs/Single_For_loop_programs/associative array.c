//associative array using a single for loop and display both keys and values

#include<stdio.h>
int main()
{
  int keys[] = {1, 2, 3, 4, 5};
char *values[] = {"Wizhi", "Identi", "Zentract", "Robitics", "AI"};

    printf("Associative Array:\n");

    for (int i = 0; i < 10; i++) {
        printf("Key: %d\tValue: %s\n", keys[i], values[i]);
    }

return 0;
}