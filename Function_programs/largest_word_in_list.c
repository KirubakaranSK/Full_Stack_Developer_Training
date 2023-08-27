#include<stdio.h>

char* largest_word(char n[])
{
    int l,i,a[50],k=0,x=0,j,max,z;
    for(l=0;n[l];l++);
    
    for(i=0;i<l; )
    {
        j=i+1;
        x=0;
        if(n[i] == 32)
        {
            while(j < l)
            {
                x++;
                if(n[j] != 32 )
                    break;
                j++;

            }
            a[k] = x;
            k++;
            i+=j;
        }
        else
        {
            while (j < l)
            {
                x++;
                if(n[i] == 32)
                    break;
                j++;
            }
            a[k]=x;
            k++;
            i+=j;
            printf("%d",x);
            
        }
    }
   
    max=a[0];
    for(i=1;i<k;i++)
    {
        if(max < a[i])
        {
            max=a[i];
            z=i;
        }
    }
    int sum = 0;

    for(i=0;i<z;i++)
    {
        sum+=a[i];
    }
    
    for(i=0;i<=max;i++)
    {
     //   printf("%c\n",n[i+sum]);
    }

}

int main(){

    char n[]="jj ee e ehjuydh   hdudj jj";
    
    largest_word(n);

    return 0;

}