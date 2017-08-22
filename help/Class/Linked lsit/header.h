//Program for linked lsit
#include<stdio.h>
#include<stdlib.h>

//Employee node structure
struct Employee
{
    int empId;
    char empName[20];
    float salary;
    struct Employee *next;
};

//Linked list structure
struct linkedlist
{
    struct Employee *first,*last;

};
//Function declaration
void initialise(struct linkedlist*);
void addemployeesatbeg(struct linkedlist*);
void addemployeesatend(struct linkedlist*);
void delemployeesatbeg(struct linkedlist*);
void delemployeesatend(struct linkedlist*);
void displayemployees(struct linkedlist*);
void searchemployee(struct linkedlist*);
void deleteusingemployeeid(struct linkedlist*);

