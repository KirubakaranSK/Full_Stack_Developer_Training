//Sum of all elements in a 2D array.

#include<stdio.h>
int main()
{
    int row,col;
    int i,j,sum=0;
     printf("Enter row size:");
     scanf("%d",&row);
     printf("Enter Column size:");
     scanf("%d",&col);
     int a[row][col];
     printf("Enter Elements:");
    for(i=0;i<row;i++)
      {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
      }
    for(i=0;i<row;i++)
      {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
      }
      printf("The Sum of 2D array is:");
       for(i=0;i<row;i++)
      {
        for(j=0;j<col;j++)
        {
            sum+=a[i][j];
        }
        
      }
      printf("%d",sum);
        printf("\n");
    return 0;
}