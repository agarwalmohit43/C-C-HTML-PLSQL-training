#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,i,n,min,j,temp;
    printf("Enter the total elements to be entered: ");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
     if(a==NULL)
        {
        printf("Memory not available");
        exit(0);
    }
    for(i=0;i<n;i++){
        printf("\nEnter the Element %d:",i+1);
        scanf("%d",&a[i]);
    }

    /*sorting*/
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
            if(min!=i){
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            }
        }
        printf("Sorted array: ");
        for(i=0;i<n;i++){
            printf(" %d ",a[i]);
        }
    }

    return 0;
}
