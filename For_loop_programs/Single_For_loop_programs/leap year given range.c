//Find and print all the leap years between two given years using a for loop.

#include<stdio.h>
int main()
{
   int st,end,i;
    printf("Enter the Starting Year:");
    scanf("%d",&st); 
    printf("Enter the Ending Year:");
    scanf("%d",&end); 

    for(i=st;i<=end;i++)
    {
        if(i%4==0)
        {
            printf("%d\n",i);
        }
    }
      
            printf("No Leap Year between this two years");

    return 0;
}
