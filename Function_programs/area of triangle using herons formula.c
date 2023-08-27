#include<stdio.h>
float area_of_triangle_using(float x,float y,float z)
{
    float s=(x+y+z)/2;
    float i;
    float n=(s*(s-x)*(s-y)*(s-z));
    for(i=0.0000;i*i<n;i+=0.0001);
    return i;
}
int main()
{
    int n,m,z;
    printf("enter the three number: ");
    scanf("%d %d %d",&n,&m,&z);
    printf("%.2f",area_of_triangle_using(n,m,z));
}