#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,n,i,c,pos,flag=0;
    printf("Enter the total elements to be entered: \n");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    if(a==NULL){
        printf("Memory not available");
        exit(0);
    }
    printf("\nEnter the element in an array: ");
    for(i=0;i<n;i++){
            printf("\nEnter the %d Element: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nEnter the desired element to be searched:");
    scanf("%d",&c);
    for(i=0;i<n;i++){
        if(a[i]==c){
                flag++;
            pos=i+1;
            break;
        }else{
        continue;}
    }
    if(flag==1){
        printf("\nElement found at position %d",pos);
    }else{
    printf("\nElement NOt Found");
    }

    return 0;
}
