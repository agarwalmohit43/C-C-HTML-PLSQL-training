#include <stdlib.h>
#include <stdio.h>

void display(int *ptr,int n)
{
    int i;
      for(i=0;i<n;i++)
    {
        printf("%d\t ",ptr[i]);
        
    }
}

void search(int *ptr,int n)
{
    int i,c,pos,flag=0;
     printf("\nEnter the desired element to be searched:");
    scanf("%d",&c);
    for(i=0;i<n;i++){
        if(ptr[i]==c){
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

}

void sort(int *ptr,int n)
{
    int i,j,temp;
     for(i=0;i<n;i++){
        for(j=1;j<(n-i);j++){
            if(ptr[j-1]>ptr[j]){
               temp=ptr[j-1];
               ptr[j-1]=ptr[j];
               ptr[j]=temp;
            }
        }
    }

        printf("\nSorted Array: ");
        for(i=0;i<n;i++){
            printf(" %d ",ptr[i]);
        }
}

int main()
{
    int *ptr,n,i,choice;char ch;
    printf("\nEnter the number of elements");
    scanf("%d",&n);
    ptr=malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("\nMemory not available");
        exit(0);
    }
    printf("\nEnter the elements in array: ");
    for(i=0;i<n;i++)
    {
        printf("\nEnter the elements in array at %d: ",i+1);
        scanf("%d",&ptr[i]);
    }
    

do
    {
        system("cls");
        printf("\n***********MENU**************\n");
        printf("\n1. Searching");
        printf("\n2. Sorting");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\n\n*****************************");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: search(ptr,n);
                    break;
            case 2: sort(ptr,n);
                    break;
            case 3: display(ptr,n);
                    break;
            case 4: exit(0);
                    
            default:printf("\nInvalid Choice");
                    break;
        }
        printf("\nDo you want to continue[y/n]");
        scanf(" %c",&ch);
    }while(ch=='y' || ch=='Y');


    
       printf("\n");
    return 0;
}
