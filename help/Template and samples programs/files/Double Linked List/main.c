#include <stdio.h>
#include <stdlib.h>
typedef struct Nodes{

int data;
struct Nodes* next;
struct Nodes* prev;
}Node;

Node* head;
int main()
{
    head=NULL;
    insertathead(5);
    insertathead(10);
    Print();
    Reverse();
    Print();
    return 0;
}
Node* getnewnode(int x){
Node* temp=(Node*)malloc(sizeof(Node));
temp->data=x;
temp->next=NULL;
temp->prev=NULL;
return temp;
}

void insertathead(int x){
Node* temp=getnewnode(x);
if(head==NULL)
{

    head=temp;
    return;
}
head->prev=temp;
temp->next=head;
head=temp;
}
void Print(){
 Node* temp=head;
                printf("List is: ");
                while(temp != NULL){
                    printf(" %d ",temp->data);
                    temp=temp->next;
                }
                printf("\n");
}

void Reverse(){
Node* temp=head;
if(temp==NULL){
    return;
}
while(temp->next!=NULL){
    temp=temp->next;

    printf("Reverse: ");
    while(temp != NULL){
        printf(" %d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}

}
