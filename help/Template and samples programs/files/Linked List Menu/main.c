#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node * next;

}Nodes;

Nodes* head;
int main()
{
    int c;int n,i,x;

    while(1){
               printf("Enter Ur choice: \n1.Insert\n2.Insert At nth Position\n3.Print\n4.Delete From nth position\n5.Reverse The List\n6.Exit\n\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
                printf("Enter the no of elements to be entered: \n");
                scanf("%d",&n);
                for(i=0;i<n;i++){
                printf("Enter the element: ");
                scanf("%d",&x);
                Insert(x);}
                Print();
                break;
    case 2:     Insertn();
                Print();
                break;
    case 3:    Print();
                break;
     case 4:   Delete();
                Print();
                break;
      case 5:  Reverse();
                Print();
                break;
     case 6:  exit(1);
                break;
    default: printf("Enter the correct Choice\n");

    }
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

void Insertn(){
    int n,x,i;
    printf("Enter the position: \n");
    scanf("%d",&n);
    printf("Enter the element: ");
    scanf("%d",&x);
    Nodes* temp=(Nodes*)malloc(sizeof(Nodes));
    temp->data=x;
    temp->next=NULL;
    if(n==1){
        temp->next=head;
        head=temp;
        return;
    }
    Nodes* temp2=head;
    for(i=0;i<n-2;i++){
        temp2=temp2->next;
    }
    temp->next=temp2->next;
    temp2->next=temp;


}

void Delete(){
    int n,i;
    printf("\nEnter the Element poistion to be deleted: ");
    scanf("%d",&n);
Nodes* temp=head;
if(n==1)
{
    head=temp->next;
        free(temp);
        return;
}
for(i=0;i<n-2;i++){

    temp=temp->next;
}
Nodes* temp2=temp->next;
temp->next=temp2->next;
free(temp2);


}
void Reverse(){

 Nodes *current,*prev,*next;
    current=head;
    prev=NULL;
    while(current != NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}
