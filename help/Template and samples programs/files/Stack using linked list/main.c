#include <stdio.h>
#include <stdlib.h>

typedef struct Nodes{
int data;
struct Nodes* next;
}Node;

Node* top=NULL;
void push(int x){
Node* temp=(Node*)malloc(sizeof(Node));
temp->data=x;
temp->next=top;
top=temp;
}

void pop(){
Node* temp;
if(top == NULL)return
temp=top;
top=top->next;
printf("Popped Element: %d\n",temp->data);
free(temp);
}

void Print(){
Node* temp=top;
printf("Stack element");
while(temp != NULL){
    printf(" %d ",temp->data);
    temp=temp->next;
}
printf("\n");
}

void reverse(){
Node *current,*prev,*next;
current=top;
prev=NULL;
while(current!=NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
}
top=prev;

}

int main()
{
    push(5);
    push(51);
    push(52);
    push(53);
    push(54);
    push(55);
    pop();
    Print();
    reverse();
    Print();
    printf("Hello world!\n");
    return 0;
}
