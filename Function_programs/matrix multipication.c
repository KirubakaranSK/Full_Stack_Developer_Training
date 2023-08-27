#include<stdio.h>
int multipication(int m,int n,int p,int q,int a[m][n],int b[p][q]){
    int i,j,k,sum;
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            sum=0;
            for(k=0;k<q;k++){
                sum=sum+(a[i][k]*b[k][j]);
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
}
int main(){
    int m,n,p,q,i,j;
    printf("enter the no.of rows and column in first matrix: ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("enter the element in rowwise");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the no.of rows and column in second matrix: ");
    scanf("%d %d",&p,&q);
    int b[p][q];
    printf("enter the element in rowwise");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    multipication(m,n,p,q,a,b);
}