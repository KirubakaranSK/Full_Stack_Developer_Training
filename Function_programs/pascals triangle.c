#include<stdio.h>
int pascals_triangle(int n){
    int m,i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        m=1;
        for(j=1;j<=i;j++){
            printf("%d ",m);
            m=m*(i-j)/j;
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("enter the number of rows to print");
    scanf("%d",&n);
    pascals_triangle(n);
}