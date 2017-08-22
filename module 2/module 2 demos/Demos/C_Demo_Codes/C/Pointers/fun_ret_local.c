/*Example to illustrate the function returning local variable*/
#include<stdio.h>

char* returnMessage(char *message);

void main()
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
    char *msg = NULL;
    char msgTest[] = "Hello how are you";
    printf("Message: %s\n", message);
    strcpy(msg, msgTest);
    return msgTest;
}