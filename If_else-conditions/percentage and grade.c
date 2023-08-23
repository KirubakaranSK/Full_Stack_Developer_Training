#include<stdio.h>
void main()
{
    int s1,s2,s3,s4,s5,total;
    float per,avg;
    printf("Enter 5 subjects marks");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    total = s1+s2+s3+s4+s5;
    printf("%d\n",total);
    per= total/5;
    printf("%f\n",per);
    if(per>=90)
    {
        printf("grade A");
    }
    else if(per>=80)
    {
        printf("grade B");
    }
    else if(per>=80)
    {
        printf("grade B");
    }
    else if(per>=70)
    {
        printf("grade C");
    }
    else if(per>=60)
    {
        printf("grade D");
    }
    else if(per>=40)
    {
        printf("grade E");
    }
    else
    {
        printf("Fail");
    }
}