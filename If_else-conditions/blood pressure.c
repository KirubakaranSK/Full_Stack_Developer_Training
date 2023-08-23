#include<stdio.h>
int main()
{
    int s, d;
    printf("enter the systolic blood pressure");
    scanf("%d",&s);
    printf("enter the diastolic pressure");
    scanf("%d",&d);
    if(s<120 && d<80)
      printf("normal");
    else if ((s>=120 && s<129) && d<80)
      printf("elevated");
    else if ((s>=130 && s<139) ||(d>80&&d<89 ))
      printf("stage 1 hypertension");
    else 
      printf("stage 2 hyper tension");
    
}