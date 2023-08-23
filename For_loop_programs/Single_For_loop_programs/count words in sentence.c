//count words in a str

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int i;
    printf("Enter a string: ");
    gets(str);    
    int length = strlen(str);
    int wordCount = 1;

    for (int i = 1; i < length; i++) {
        if (str[i] == 32 || str[i] == '\t')
         {
           wordCount++;
        } 
    }

    printf("Number of words in the sentence: %d\n", wordCount);

    return 0;
}
