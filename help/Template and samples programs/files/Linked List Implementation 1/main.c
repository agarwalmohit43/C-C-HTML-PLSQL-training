#include <stdio.h>
#include <stdlib.h>

 struct Node{

int data;
struct Node* link;
};

struct Node* head;

int main()
{
    head=NULL;
    int n,i,x;
    printf("Enter the no. of elements to be inserted: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the Numbers: \n");
        scanf("%d",&x);
        insert(x);
        printq();
    }

    return 0;
}
void insert(int x){
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=x;
temp->link=head;
head=temp;
}

void printq(){
struct Node* temp=head;
printf("List is: ");
while(temp !=NULL){
    printf(" %d ",temp->data);
    temp=temp->link;
}
printf("\n");

}
