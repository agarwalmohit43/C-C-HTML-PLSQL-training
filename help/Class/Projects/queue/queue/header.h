//Program for queue
#include<stdio.h>
#include<stdlib.h>

//queue data
struct queuedata
{
    int data;
    struct stackdata *next;
};

//Linked list structure
struct stack
{
    struct stackdata *top;

};
//Function declaration
void initialise(struct stack*);
void push(struct stack*);
void pop(struct stack*);
void top(struct stack*);