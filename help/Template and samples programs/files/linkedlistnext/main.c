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
    int n,x,i;
    printf("Enter the no. of elements to be entered");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the elements");
        scanf("%d",&x);
        add(x);
        display();
    }
    return 0;
}

void add(int x){
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

void display(){
node* temp=head;
printf("List is: ");
while(temp !=NULL){
    printf(" %d ",temp->data);
    temp=temp->next;
}
printf("\n");

}
