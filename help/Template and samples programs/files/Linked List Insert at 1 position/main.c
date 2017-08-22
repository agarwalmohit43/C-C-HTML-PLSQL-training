#include <stdio.h>
#include <stdlib.h>

typedef struct Node{

    int data;
    struct Node* next;
}Nodes;

Nodes* head;
int main()
{
    head=NULL;
    int n,i,x;
    printf("Enter the no of elements to be entered: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d",&x);
        Insert(x);
        Print();
    }

    return 0;
}

void Insert(int x){
Nodes* temp=(Nodes*)malloc(sizeof(Nodes));
temp->data=x;
temp->next=head;
head=temp;
}

void Print(){
Nodes* temp=head;
printf("List is: ");
while(temp != NULL){
    printf(" %d ",temp->data);
    temp=temp->next;
}
printf("\n");
}
