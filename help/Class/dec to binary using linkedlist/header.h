#include<stdio.h>
#include<stdlib.h>

struct num
{
    int number;
    struct stack *next;
};

struct stack
{
    struct num *top;
};

void push(struct stack*,int);
int pop(struct stack*);
void peep(struct stack*);
int isempty(struct stack *ptr);
