#include<stdio.h>
int main()
{
    char str[100];
    int i,vow=0;
printf("Enter the String:");
scanf("%s",&str);
for(i=0;i<strlen(str);i++)
{
    char l=str[i];
    if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'||l=='A'||l=='E'||l=='I'||l=='O'||l=='U')
    vow++;
}
   printf("Number of Vowels in string: %d",vow);
    return 0;
}