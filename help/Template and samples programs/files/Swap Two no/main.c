#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,c;
    printf("Enter The First No: ");
    scanf("%d",&x);
    printf("\nEnter The Second No: ");
    scanf("%d",&y);
    printf("\nValues Before Swapping X=%d And Y=%d",x,y);
    printf("\n\nEnter The Way You Wanna Swap:\n1.Using Temporary Variable\n2.Without Using Temporary Variable\n3.Without Using Temporary Variable(Without using + operator)\n4.Using Bitwise Operator\n5.Using Pointer\n");
    scanf("%d",&c);
    switch(c){
    case 1:temp(x,y);
            break;
    case 2:wtemp(x,y);
            break;
    case 3:wtemp2(x,y);
            break;
    case 4:bit(x,y);
            break;
    case 5:pointer(&x,&y);
            break;
    default:printf("Invalid Choice");
    }
    return 0;
}
void temp(int x,int y)
{
int temp=0;
temp=x;
x=y;
y=temp;
printf("\nValues After Swapping X=%d And Y=%d",x,y);
}
void wtemp(int x,int y){

x=x+y;
y=x-y;
x=x-y;
printf("\nValues After Swapping X=%d And Y=%d",x,y);
}

void wtemp2(int x,int y){

x=x*y;
y=x/y;
x=x/y;
printf("\nValues After Swapping X=%d And Y=%d",x,y);
}

void bit(int x,int y){

x=x^y;
y=x^y;
x=x^y;
printf("\nValues After Swapping X=%d And Y=%d",x,y);
}
void pointer(int *x,int *y){

int temp;
temp=*x;
*x=*y;
*y=temp;
printf("\nValues After Swapping X=%d And Y=%d",*x,*y);
}
