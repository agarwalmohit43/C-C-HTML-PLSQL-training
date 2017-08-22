#include "header.h"

void initialise(struct linkedlist *ptr)
{
    ptr->first=NULL;
    ptr->last=NULL;
}

struct Employee* createemployee()
{
    struct Employee *temp;
    temp=(struct Employee*)malloc(sizeof(struct Employee));
    if(temp==NULL)
    {
        printf("\nMemonry not available");
        return NULL;
    }
    else
    {
        printf("\nEnter Empid: ");
        scanf("%d",&temp->empId);
        
        printf("\nEnter Empname: ");
        scanf("%s",temp->empName);
        
        printf("\nEnter Salary: ");
        scanf("%f",&temp->salary);
        temp->next=NULL;
    }
    return temp;
}

void addemployeesatbeg(struct linkedlist *ptr)
{
    struct Employee *temp;
    temp=createemployee();
    if(temp==NULL)
    {
        printf("\nMemonry not available");
       exit(0);
    }
    else
    {
        if(ptr->first==NULL)
        {
            ptr->first=temp;
            ptr->last=temp;
        }else
        {
            temp->next=ptr->first;
            ptr->first=temp;
        }
    }

}

void addemployeesatend(struct linkedlist *ptr)
{
    struct Employee *temp;
    temp=createemployee();
    if(temp==NULL)
    {
        printf("\nMemonry not available");
       return 1;
    }
    else
    {
        if(ptr->first==NULL)
        {
            ptr->first=temp;
            ptr->last=temp;
        }else
        {
            ptr->last->next=temp;
            ptr->last=temp;
        }
    }

}


void delemployeesatbeg(struct linkedlist *ptr)
{    struct Employee *temp;
    if(ptr->first==NULL)
    {
        printf("\nList is empty");
    }else
    {
        temp=ptr->first;
        ptr->first=ptr->first->next;
      //ptr->first=temp->next;yeh bi kar sakte hai
        free(temp);
        printf("\nEmployee Deleted From List\n");
    }
  

}

void delemployeesatend(struct linkedlist *ptr)
{
    struct Employee *temp,*temp2;
    if(ptr->first==NULL)
    {
        printf("\nList is empty");
    }else if(ptr->first=ptr->last)
    {
        temp=ptr->first;
        ptr->first=NULL;
        ptr->last=NULL;
        free(temp);
        printf("\nEmployee Deleted From List\n");
    }
    else
    {   
        temp=ptr->first;
        temp2=temp;
        while(temp->next!=NULL)
        {   
            temp2=temp;
            temp=temp->next;   
        }
        temp2->next=NULL;
        ptr->last=temp2;
        free(temp);
         printf("\nEmployee Deleted From List\n");
    }
  
 

}

struct Employee*findemployee(struct linkedlist *ptr,int id)
{
    int flag;
    struct Employee *temp;
    temp=ptr->first;
    while(temp!=NULL)
    {
        if(id==temp->empId)
        {
            flag=1;break;
        }
        temp=temp->next;
    }
    if(flag==1)
    {
        return temp;
    }
    else
    {
        return NULL;
    }
}

void displayemployees(struct linkedlist *ptr)
{
    struct Employee *temp;

    if(ptr->first==NULL)
    {
        printf("\nList empty");
    }
    else
    {
        temp=ptr->first;
        
        while(temp!=NULL)
        {
            printf("\nEmployee Id: %d",temp->empId);
            printf("\nEmployee Name: %s",temp->empName);
            printf("\nEmployee Salary: %f",temp->salary);
            printf("\n");
            temp=temp->next;
        }
    }

}

void searchemployee(struct linkedlist *ptr)
{
      int empId;
    struct Employee *temp;

    if(ptr->first==NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        printf("\nEnter Employee Id: ");
        scanf("%d",&empId);
        temp=findemployee(ptr,empId);
        if(temp!=NULL)
        {
            printf("\nEmployee Id: %d",temp->empId);
            printf("\nEmployee Name: %s",temp->empName);
            printf("\nEmployee Salary: %f",temp->salary);
            printf("\n");
        }
        else
        {
            printf("\nEmployee not found");
        }
    }

}

void deleteusingemployeeid(struct linkedlist *ptr)
{  
    
    struct Employee *temp,*temp2;
    int id;
    
    if(ptr->first==NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        printf("\nEnter employee id: ");
        scanf("%d",&id);
        temp=findemployee(ptr,id);
        if(temp!=NULL)
        {
            if(temp==ptr->first)
                delemployeesatbeg(ptr);
            else if(temp==ptr->last)
                delemployeesatend(ptr);
            else
            {
                temp2=ptr->first;
                while(temp2->next!=temp)
                {
                    temp2=temp2->next;
                }
                temp2->next=temp->next;
                free(temp);
            }
        }
        else
        {
            printf("\nRecord not found..!!");
        }
    }

}