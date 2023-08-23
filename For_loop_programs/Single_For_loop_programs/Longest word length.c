//Find the length of the longest word in a sentence.

#include <stdio.h>
int main() {
    char str[100];
    printf("Enter the sentence:");
    gets(str);
    int len = strlen(str); 

    int longWrdlen = 0; 
    int currentWrdlen = 0; 
    for (int i = 0; i <= len; i++) 
    {
        if (str[i] != ' ' && str[i] != '\0') 
        {
            currentWrdlen++;
        } else 
        {
            if (currentWrdlen > longWrdlen)
            {
                longWrdlen = currentWrdlen;
            }
            currentWrdlen = 0; 
        }
    }

    printf("The Longest word in sentence and is length is: %d\n", longWrdlen);

    return 0;
}
