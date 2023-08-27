#include<stdio.h>
int prismR(int length,int width,int height)
{
    return length*width*height;
}
int main()
{
    int length,width,height;
    printf("Enter length width and height");
    scanf("%d %d %d",&length,&width,&height);
    printf("%d",prismR(length,width,height));
return 0;
}