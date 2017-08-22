#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int a[MAX];
int top=-1;
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

        return 0;
}
void push(int x){
if(top==MAX-1){
    printf("\nStack is Full");
}
a[++top]=x;
}

void pop(){
if(top==-1){
    printf("Stack is empty\n");
}
printf("Popped ELement: %d ",a[top--]);
}

void Print(){
if(top==-1){
    printf("Stack is Empty\n");
}
int i;
printf("\nStack element: ");
for(i=0;i<=top;i++){
    printf(" %d ",a[i]);
}
}

reverse(){
int i;
printf("\nReverse Stack element: ");
for(i=top;i>=0;i--){
    printf(" %d ",a[i]);

}

}
