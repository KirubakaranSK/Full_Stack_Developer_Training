#include<stdio.h>
float compound_interest(int p,int t,float i){
    int j;
    float ci=1;
    float y=(1+(i/100));
    for(j=0;j<t;j++){
         ci=ci*y;
    }
    printf("%f\n",ci*p);
    return (ci*p)-p;
}
int main(){
    int p,t;
    float i;
    printf("enter the intial balance,time,interest:  ");
    scanf("%d %d %f",&p,&t,&i);
    printf("%f",compound_interest(p,t,i));
}