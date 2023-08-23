//Given a list of words, print the ones that start with a vowel.

#include<stdio.h>
int main()
 {
    char wrds[20][50]; 
    int n;

    printf("Enter the number of words: ");
    scanf("%d", &n);

    printf("Enter words: ");
    for (int i = 0; i < n; i++)
     {
        scanf("%s", &wrds[i]);
     }

    printf("Words starting with vowels:\n");

    
    for (int i = 0; i < n; i++)
     {
        char firstChar = tolower(wrds[i][0]); 
        if (firstChar == 'a' || firstChar == 'e' || firstChar == 'i' || firstChar == 'o' || firstChar == 'u') 
        {
            printf("%s\n", wrds[i]);
        }
     }

    return 0;
}


