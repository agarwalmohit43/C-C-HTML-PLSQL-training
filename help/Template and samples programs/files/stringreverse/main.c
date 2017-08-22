#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char a[50],b[50];
    int p,i=0,temp;
    printf("Enter the string: ");
    gets(a);
    p=strlen(a)-1;

    printf("\nEarlier String: %s",a);
    printf("\nReverse String:");
     for(i=p;i>=0;i--){
       printf("%c",a[i]);
      }

/*  while(i<p){
 *     temp=a[i];
 *     a[i]=a[p];
 *     a[p]=temp;
 *     i++;
 *     p--;
 *  }
 */


    printf("\nReverse String: %s",a);
    return 0;
}
