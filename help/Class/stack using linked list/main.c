#include "header.h"

int main()
{

    struct linkedlist list1;
    initialize(&list1);
    
    
    push(&list1,12);
    push(&list1,23);
    push(&list1,56);
    push(&list1,45);
    push(&list1,98);
    peep(&list1);
    printf("\n%d popped successfully....\n\n",pop(&list1));
    pop(&list1);
    pop(&list1);
    pop(&list1);
    pop(&list1);
    
    
    
}
