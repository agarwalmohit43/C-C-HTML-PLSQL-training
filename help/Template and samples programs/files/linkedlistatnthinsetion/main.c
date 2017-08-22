#include <stdio.h>
#include <stdlib.h>

typedef struct mohit{
int data;
struct mohit* next;
}node;

node* head;
int main()
{
    head=NULL;
    while(1){
        int choice;
    printf("\n1.Insert\n2.Insert at nth position\n3.Display\n4.Delete From 1st\n5.Delete from the end\n6.Delete at nth position\n7.Reverse\n8.Exit\n");
    scanf("%d",&choice);
    switch(choice){
    case 1: add();
            display();
            break;
    case 2: insertn();
            display();
            break;
    case 3: display();
            break;
    case 4: deletestart();
            display();
            break;
    case 5 :deleteend();
            display();
            break;
    case 6: deleten();
            display();
            break;
    case 7: reverse();
            display();
            break;
    case 8: exit(1);
            break;

    default: printf("Invalid Choice");
    }
    }

    return 0;
}

void add()
{
    int n,x,i;
    printf("\nEnter the no. of values to be entered: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            printf("\nEnter the element: ");
            scanf("%d",&x);
            node* temp=(node*)malloc(sizeof(node*));
            if(head==NULL){
                temp->data=x;
                temp->next=head;
                head=temp;
            }else{
                    node* temp2=head;
                    while(temp2->next!=NULL){
                        temp2=temp2->next;
                    }
                    temp->data=x;
                    temp->next=temp2->next;
                    temp2->next=temp;
                 }
        }
}
void display(){
            node* temp=head;
                printf("List is: ");
                while(temp != NULL){
                    printf(" %d ",temp->data);
                    temp=temp->next;
                }
                printf("\n");
}


void insertn(){
    int pos,val,i;
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    printf("\nEnter the value of element: ");
    scanf("%d",&val);
    node* temp=(node*)malloc(sizeof(node*));

            if(pos==1)
                {
                temp->data=val;
                temp->next=head;
                head=temp;
               }else
                {
                    node* temp2=head;
                    for(i=1;i<=pos-2;i++)
                    {
                        temp2=temp2->next;
                    }
                    temp->data=val;
                    temp->next=temp2->next;
                    temp2->next=temp;


                }

}

void deletestart(){
head=head->next;
}

void deleteend(){
    node* temp=head;
    node* temp2=head;
    while(temp->next!=NULL){
        temp2=temp;
        temp=temp->next;
    }
    temp2->next=NULL;
    free(temp);

}

void deleten(){
int pos,i;
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    if(pos==1){
        head=head->next;
    }
    else{
        node* temp=head;
    node* temp2=head;
    for(i=1;i<=pos-1;i++){
            temp=temp2;
    temp2=temp2->next;
    }
    temp->next=temp2->next;
    free(temp2);
    }
}

void reverse(){
node *current,*next,*prev;
current=head;
prev=NULL;
while(current!=NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
}
head=prev;
}
