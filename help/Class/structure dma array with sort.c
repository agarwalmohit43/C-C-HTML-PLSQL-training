#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    int roll;
    char name[20];
}details;

int binarysearch(details *ptr,int n,int m,int l,int u)
{
    int mid,c=0;
    if(l<=u)
    {
        mid=(l+u)/2;
        if(ptr[mid].roll==m)
        {
           c=1;
        }else if(m<ptr[mid].roll)
        {
        return binarysearch(ptr,n,m,mid-1,u);
        }else
        {
        return binarysearch(ptr,n,m,mid+1,u);
        }
    }else
    {
        return c;
    }
    
}


void display(details *ptr,int n)
{
    int i;
      for(i=0;i<n;i++)
    {
        printf("\nRoll Number: %d",ptr[i].roll);
        printf("\nName: %s",ptr[i].name);
        printf("\n");
       

    }
      printf("\n");
}


void search(details *ptr,int n)
{
    int i,c,pos,flag=0;
     printf("\nEnter the desired element to be searched:");
    scanf("%d",&c);
    for(i=0;i<n;i++){
        if(ptr[i].roll==c){
                flag++;
            pos=i+1;
            break;
        }else{
        continue;}
    }
    if(flag==1){
        printf("\nRecord found at position %d",pos);
    }else{
    printf("\nRecord NOt Found");
    }

}

void sort(details *ptr,int n)
{
    int i,j,tempRoll,flag=0;
    details *temp;
    temp=(details *)malloc(n*sizeof(details));
    
     for(i=0;i<n;i++){
        for(j=1;j<(n-i);j++)
        {
		   
            if(ptr[j-1].roll>ptr[j].roll)
            {
                 flag=1;
                 tempRoll=ptr[j-1].roll;
                 ptr[j-1].roll=ptr[j].roll;
                 ptr[j].roll=tempRoll;

                 strcpy(temp->name,ptr[j-1].name);
                 strcpy(ptr[j-1].name,ptr[j].name);
                 strcpy(ptr[j].name,temp->name);
            }
        }
		display(ptr,n);
		if(flag==1)
        {
		flag=0;
		}else
        {
		break;
        }
    }

        
}

int main()
{

    details *ptr;
    int n,i,choice,serachFound,roll;
    char ch;

    printf("\nEnter the total number of records");
    scanf("%d",&n);

    ptr=(details *)malloc(n*sizeof(details));

    if(ptr==NULL)
    {
        printf("\nMemory not available");
        exit(0);
    }
    printf("\nEnter the Details: ");
    for(i=0;i<n;i++)
    {
        printf("\nEnter the roll Number: ");
        scanf("%d",&ptr[i].roll);


        printf("\nEnter the Name: ");
        scanf("%s",ptr[i].name);

    }
    

do
    {
        system("cls");
        printf("\n***********MENU**************\n");
        printf("\n1. Searching");
        printf("\n2. Sorting");
        printf("\n3. Display");
        printf("\n4. Binary Search");
        printf("\n5. Exit");
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
            case 4: sort(ptr,n);
                printf("\nEnter the Roll no: ");
                    scanf("%d",&roll);
                    serachFound=binarysearch(ptr,n,roll,0,n-1);
                    if(serachFound==0)
                        {
                            printf("Record Not found");
                        }else
                        {
                            printf("\nRecord found");
                        }
                    break;
            case 5: exit(0);
                    
            default:printf("\nInvalid Choice");
                    break;
        }
        printf("\nDo you want to continue[y/n]");
        scanf(" %c",&ch);
    }while(ch=='y' || ch=='Y');

   
    
    printf("\n");
    return 0;
}

