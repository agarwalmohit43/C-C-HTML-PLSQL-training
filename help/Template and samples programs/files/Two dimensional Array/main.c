#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i,j;
    printf("Enter the No. of rows: ");
    scanf("%d",&r);
    printf("Enter the No. of Columns: ");
    scanf("%d",&c);
    if(r==c){
        int a[r][c],b[r][c],sum[r][c];
    printf("\nEnter The Elements in 1st Matrix:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\nEnter the %d%d elements for 1st: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
     printf("\nEnter The Elements in 2nd Matrix:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\nEnter the %d%d elements 2nd: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }


    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];

        }
    }

    printf("Addition of two matrix:\n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
         printf(" %d ",sum[i][j]);
         if(j==c-1){
            printf("\n\n");
         }

        }}
    }else{
    printf("\nPlease enter in n*n form ex: 2*2\n");
    }

    return 0;
}
