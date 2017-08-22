//programm for the linked list
#include<stdio.h>
#include<stdlib.h>
//employee node structure
struct customer
{
	int billMonth;
	int consumerNo;
	char consumerName[20];
	float unitConsumed;
	struct customer *next;
};
//linked list structure
struct linkedlist
{
	struct customer *first,*last;
};

void initialize(struct linkedlist*);
void addcustomeratbeg(struct linkedlist*);
void displaycustomers(struct linkedlist*);
//void addemployeeatend(struct linkedlist*);
//void deleteatbeg(struct linkedlist*);
void deletecustomeratend(struct linkedlist*);
//void search(struct linkedlist*);
//void deleteRecord(struct linkedlist*);
//struct employee *findemployee(struct linkedlist *,int);
void sort(struct linkedlist*);
void top3Customers(struct linkedlist*);
void displayByBIllMonth(struct linkedlist*);
void displayByConsumerNo(struct linkedlist*);
void writeToFile(struct linkedlist*);
