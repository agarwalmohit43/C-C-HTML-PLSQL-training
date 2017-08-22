#include "Stack.h"
template<class T>
Stack<T>::Stack(int size)
{
    this->size=size;
    top=-1;
    ptr=new T[size];
}

template<class T>
void Stack<T>::push(T data)
{
    if(isFull())
        cout<<"\n Stack is overflow"<<endl;
    else
        ptr[++top]=data;
    
}


template<class T>
T Stack<T>::pop()
{
    if(isEmpty())
        cout<<"\n Stack is underflow"<<endl;
    else
       return ptr[top--];
}

template<class T>
T Stack<T>::peek()
{
    if(isEmpty())
        cout<<"\n Stack is underflow"<<endl;
     else
         return ptr[top];
}
template<class T>
bool Stack<T>::isFull()
{
   /* if(top==size-1)
        return true;
    else
        return false;*/
    return top==size-1;
}
template<class T>
bool Stack<T>::isEmpty()
{
    /*if(top==-1)
        return true;
    else
        return false;*/
    return top==-1;
}

