#include<stdio.h>
int NAp(int start,int diff,int end)
{
    return start+((end - 1)*diff);
}
int main()
{
    int strt,end,diff;
    printf("Enter start ,difference and end value");
    scanf("%d %d %d",&strt,&diff,&end);
    printf("%d",NAp(strt,diff,end));
    return 0;
}