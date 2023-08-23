#include<stdio.h>
int main()
{
    float gpa;
    printf("enter the student gpa ");
    scanf("%f",&gpa);
    if(gpa<=2.0)
      printf("academic probation");
    else
      printf("good standing");
}