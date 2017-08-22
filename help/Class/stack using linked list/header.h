#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int number;
    struct stack *next;
};

struct linkedlist
{
    struct stack *top;
};

void push(struct linkedlist*,int);
int pop(struct linkedlist*);
void peep(struct linkedlist*);
