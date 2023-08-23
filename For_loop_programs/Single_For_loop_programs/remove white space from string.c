//Remove all white spaces from a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    gets(str);

    int length = strlen(str);

    for (i = 0; i < length; i++)
     {
        if (str[i] != 32 && str[i] != '\t') 
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}
