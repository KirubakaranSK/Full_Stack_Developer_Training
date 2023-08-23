//Calculate the factorial of each element in an array and store them in a new array.

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    int factArr[n];
    for (int i = 0; i < n; i++) 
    {
        int fact = 1;
        for (int j = 1; j <= arr[i]; j++)
        {
            fact *= j;
        }
        factArr[i] = fact;
    }
    
    printf("Factorials of the elements:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Factorial of %d is %d\n", arr[i], factArr[i]);
    }

    return 0;
}
