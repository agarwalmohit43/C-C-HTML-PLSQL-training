//header.h
#include<stdio.h>
#include<stdlib.h>
//Number node structure
struct member
{
	char ch;
	struct member *next; //pointer to next node
};
struct queue
{
	struct member *front,*rear;
};
//void initialize(struct stack*,int number[],int size);
void insert(struct queue*,char ch);
char end(struct queue*);
//void top(struct stack*,int number);
//void isEmpty(struct stack*,int number);
