#include<stdio.h>
int anagrams(char a[], char b[],int len,int len1)
{
    int found=0;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len1;j++)
        {
            if(a[i] == b[j])
            {
                found = 1;
            }
            else
            {
                found = 0;
            }
        }
    }
    if(found == 1)
    {
        printf("The two strings are anagrams");
    }
    else
    {
        printf("the two strings are not anagrams");
    }
return 0;

}

int main()
{
    int i,j;
    char a[]="cat";
    char b[]="act";
    for(i=0;a[i];i++); //To find the length of array
    for(j=0;b[j];j++);
    anagrams(a,b,i,j);
    return 0;
}