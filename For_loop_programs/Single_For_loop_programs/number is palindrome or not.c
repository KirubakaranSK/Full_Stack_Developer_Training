//Check if the given number is a palindrome.


#include <stdio.h>

int main() 
{
    int n,i,rev = 0, originalNum;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNum = n;

    
    for(i=0;n > 0;i++)
     {
        int digit = n % 10;
        rev= rev * 10 + digit;
        n /= 10;
    }

    if (originalNum == rev) 
    {
        printf("%d is a palindrome.\n", originalNum);
    }
     else 
    {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
