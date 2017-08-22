#include <stdlib.h>
#include <stdio.h>


int main()
{
    int n,i,j,temp,*a;
    printf("Enter the Length Of the Array: ");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    if(a==NULL)
        {
        printf("Memory not available");
        exit(0);
    }
    for(i=0;i<n;i++){
     printf("\nEnter The %d Elements: ",i+1);
     scanf("%d",&a[i]);
    }
    printf("\nUnsorted Array: ");
        for(i=0;i<n;i++){
            printf(" %d ",a[i]);
        }


    for(i=0;i<n;i++){
        for(j=1;j<(n-i);j++){
            if(a[j-1]>a[j]){
               temp=a[j-1];
               a[j-1]=a[j];
               a[j]=temp;
            }
        }
    }

        printf("\nSorted Array: ");
        for(i=0;i<n;i++){
            printf(" %d ",a[i]);
        }
        free(a);
    return 0;
}
