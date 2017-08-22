#include <stdio.h>
#include <stdlib.h>
typedef struct mohit{
int data;
struct mohit* next;
struct mohit* prev;
}node;

node* head;
int main()
{
    head=NULL;
    int x,n,i;
    printf("Enter the no. of element to be entered: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the elements: ");
        scanf("%d",&x);
        add(x);
        display();
    }
    return 0;
}

void add(int x){

node* temp=(node*)malloc(sizeof(node*));

//   if(head==NULL){
//
//   temp->data=x;
//   temp->next=NULL;
//   temp->prev=NULL;
//   head=temp;
//
//   }else{
//       temp->data=x;
//   head->prev=temp;
//   temp->next=head;
//   head=temp;
//   }

if(head==NULL){
    temp->data=x;
    temp->next=head;
    temp->prev=head;
    head=temp;

}else{
node* temp2=head;
while(temp2->next!=NULL){
    temp2=temp2->next;
}
temp->data=x;
temp->next=temp2->next;
temp->prev=temp2;
temp2->next=temp;
temp2=temp;
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



