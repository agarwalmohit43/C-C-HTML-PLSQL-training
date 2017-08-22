#include<stdio.h>
#include<stdlib.h>
#define Null 0
main()
{

    char *buffer;
    
    /*allocating memory*/
    if((buffer = (char*)malloc(10))==NULL)
    {
	printf("malloc failed");
	exit(1);
    }
    printf("buffer of size %d created \n",_msize(buffer));
    strcpy(buffer,"hyderabad");
    printf("\n buffer contains : %s \n",buffer);
    
    /*reallocation*/
    if((buffer = (char*)realloc(buffer,15))==NULL)
    {
	printf("realloc failed");
	exit(1);
    }
    printf("buffer  size mofified \n");
    strcpy(buffer,"secunderbad");
    printf("\n buffer now contains : %s \n",buffer);
    
    /*freeing memory*/
    free(buffer);
}