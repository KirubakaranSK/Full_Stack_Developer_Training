#include<stdio.h>
void main()
{
    float bs,hra,da,gs; //bs=basic salary,hra=house rent allowance,da=,gs=gross salary
    printf("enter basic salary");
    scanf("%f",&bs);
    if(bs<=10000)
    {
        da=bs*0.8;
        hra=bs*0.2;
    }
    else if(bs<=20000)
    {
        da = bs*0.9;
        hra = bs * 0.25;
    }
    else
    {
        da = bs*0.95;
        hra = bs * 0.3;
    }
    gs = bs + hra + da;
    printf("the Gross Salary %f",gs);
}