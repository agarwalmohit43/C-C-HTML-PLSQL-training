#include<stdio.h>


char* returnMessage(char *message);

void main(void)
{
char *ptrRtn = NULL;
char *ptrTest = NULL;
    char test[] = "Hello";
    ptrTest = test;
    ptrRtn = returnMessage(ptrTest);
    printf("%d",ptrRtn);
}

char* returnMessage(char *message)
{
  
    
    char *msg = (char *) malloc(sizeof(char));
    
    char msgTest[] = "Hello how are you";
	  printf("Message: %s\n", message);
    
    strncpy(msg, msgTest, sizeof(msgTest));
    
    return msg;
}
