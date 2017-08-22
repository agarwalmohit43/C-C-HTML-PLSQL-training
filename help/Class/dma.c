#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int *ptr,i,n;
    printf("\nEnter the total no. of elements: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Space not available");
        exit(0);
    }
    
        for(i=0;i<n;i++)
        {   printf("\nEnter %d elements: ",i+1);
            scanf("%d",&ptr[i]);
        }
        printf("\nElements in an dynamic array\n");
        for(i=0;i<n;i++)
        {   
            printf("%d\t",ptr[i]);
        }
    
    free(ptr);
    printf("\n");
    system("pause");
    return 0; 
}

