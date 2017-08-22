#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
int data;
struct Node* link;
}mohit;
mohit* head;
int main(){
head=NULL;
int x,n,i;
    printf("Enter the no. of values to be entered: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d",&x);
        add(x);
        display();
    }
return 0;
}

void add(int x){
mohit* temp=(mohit*)malloc(sizeof(mohit*));
temp->data=x;
temp->link=head;
head=temp;
}

void displa(){
mohit* temp=head;
while(temp!=NULL){
    printf("List: %d",temp->data);
    temp=temp->link;

}


}
