#include <stdio.h>
#include <stdlib.h>

typedef struct mohit{
int data;
struct mohit* next;}node;

node* head;
int main()
{
    head=NULL;

    while(1){
        printf("Enter the choice: \n 1.Insert\n 2.Display\n 3.Delete\n 4.Insert at nth position\n 5.Delete at nth position\n 6.Reverse\n 7.Exit\n");
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1: insert();

                break;
         case 2: display();
                 break;

          case 3: delete();
                  display();
                  break;
          case 4: insertn();
                  display();
                  break;
          case 5: deleten();
                  display();
                  break;
        case 6: reverse();
                display();
                break;

        case 7: exit(0);
                    break;
                default:printf("Invalid Choice");

    }
    }
    return 0;
}

void insert(){
int x,i,n;
printf("\n Enter the no. of terms:");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("\n Enter the values: ");
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
while(temp !=NULL){
    printf(" %d ",temp->data);
    temp=temp->next;
}

printf("\n");
}
void delete(){
if(head==NULL){
    printf("No Element in list:");
}else{
node* temp=head;
node* temp2=temp;
while(temp->next!=NULL){
    temp2=temp;
    temp=temp->next;
}
temp2->next=temp->next;
free(temp);}


}

void insertn(){
    int pos,val,i;
printf("\n Enter the position: ");
scanf("%d",&pos);
printf("\n Enter the value: ");
scanf("%d",&val);
node* temp=(node*)malloc(sizeof(node*));
temp->data=val;
if(pos==1){

    temp->next=head;
    head=temp;

}else{

node* temp2=head;

for(i=1;i<=pos-2;i++){

temp2=temp2->next;
}
temp->next=temp2->next;
temp2->next=temp;
}
}

void deleten(){
int pos,i;
printf("\n Enter the position of element to be deleted: ");
scanf("%d",&pos);
if(pos==1){
    head=head->next;
}else{
node*temp=head;
node* temp2=temp;
for(i=1;i<pos-1;i++){
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
