//for loop to iterate through a list of strings and display each string's length

#include<stdio.h>
int main()
{
    char *str[] = {"Finstein", "Wizhi", "Zentract", "Margadharasi","Identi"};
    int numstr = sizeof(str)/sizeof(str[0]);
    int len,i;
    for(i=0;i< numstr;i++)
    {
        len=strlen(str[i]);
        printf("The word %s and is length is %d\n",str[i],len);
    }
    
    return 0;
}