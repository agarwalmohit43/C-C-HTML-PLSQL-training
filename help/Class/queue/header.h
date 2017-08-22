//Program for stack
#include<stdio.h>
#include<stdlib.h>

//stack data
struct queuedata
{
    int data;
    struct queuedata *next;
};

//Linked list structure
struct queue
{
    struct queuedata *front,*rear;

};
//Function declaration
void enqueue(struct queue*);
void dequeue(struct queue*);
void front(struct queue*);
void rear(struct queue*);