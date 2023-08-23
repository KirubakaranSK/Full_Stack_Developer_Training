#include<stdio.h>
void main()
{
    int sp,cp,pft,loss; //sp=selling price,cp=cost price,pft=profitter
    printf("Enter Selling and Cost Price");
    scanf("%d %d",&sp,&cp);
    if(sp>cp)
    {
        pft=sp-cp;
        printf("The profit is %d",pft);
    }
    else if(cp > sp)
    {
        loss = cp-sp;
        printf("The loss is %d",loss);
    }
    else
    {
        printf("No loss no profit");
    }

}