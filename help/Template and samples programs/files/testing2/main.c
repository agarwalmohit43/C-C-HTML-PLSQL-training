#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,i,n;
    printf("enter the total no. to be entered: ");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    if(a!=NULL){
       for(i=0;i<n;i++){
        printf("\nEnter the %d element: ",i+1);
        scanf("%d",&a[i]);
       }
    }else{
        printf("Unable to allocate");
    }

    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
