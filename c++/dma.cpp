#include<iostream>
using namespace std;


void main()
{   
    int *ptr,number,*iptr;
    cout<<"\nEnter the number of elements: ";
    cin>>number;
    ptr=new int[number];
    for(int i=0;i<number;i++)
        cin>>ptr[i];

    cout<<"\nElements in an array are: ";
     for(int i=0;i<number;i++)
        cout<<ptr[i]<<"\t";
     delete []ptr;
    iptr=new int;//dma for 1 element
    delete iptr;
    cout<<"\n"<<endl;
}