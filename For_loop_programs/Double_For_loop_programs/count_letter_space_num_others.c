#include<stdio.h>
int main()
{
	int i,l=0,s=0,b=0,o=0,x;
    char n[20];
    printf("enter first number : ");
    gets(n);
    for(x=0;n[x];x++);
    for(i=0;i<x;i++)
    {
        if((n[i]>64 && n[i]<91) || (n[i]>96 && n[i]<123) )
            l++;
        else if (n[i] ==32)
            s++;
        else if (n[i]>47 && n[i]<58)
            b++;
        else
            o++;
}
printf("letter = %d\nspace = %d\nnumber = %d\nothers = %d",l,s,b,o);


    return 0;
}
