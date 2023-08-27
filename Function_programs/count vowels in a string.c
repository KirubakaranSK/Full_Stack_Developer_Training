
#include <stdio.h>

void vowels(char str[],int len)
{
    
    int count = 0;
    for(int i=0 ;i<len;i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    printf("the vowels are %d",count);
}

void main()
{
	char a[]="Today is rainy day";
	int len=sizeof(a);
	vowels(a,len);
}