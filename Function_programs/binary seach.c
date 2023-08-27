#include<stdio.h>
int sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a;
}
char* binary_search(int a[],int len,int x){
    sort(a,len);
    int first=0,last=len;
    for(;first<=last;){
        int mid=first+last/2;
        if(a[mid]==x)
          return "number present in array";
        else if(a[mid]<x)
          last=mid-1;
        else
          first=mid+1;
    }
    return "number not present in array";
}
int main(){
    int a[]={1,3,4,2,6,5};
    int len=sizeof(a)/sizeof(a[0]);
    int x=8;
    printf("%s",binary_search(a,len,x));
}
