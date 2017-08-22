#include"header.h"

template<class P>
Stack<P>::Stack(int size)
{
    this->size=size;
    top=-1;
    ptr=new P[size];
}

template<class P>
Stack<P>::Stack(Stack<P> &s)
{
    size=s.size;
    top=s.top;
    ptr=new P[size];
    for(int i=0;i<s.top;i++)
        ptr[i]=s.ptr[i];
}

template<class P>
Stack<P>::~Stack()
{
    delete []ptr;
}

template<class P>
void Stack<P>::push(P data)
{
    if(top==size-1)
        cout<<"\n Stack is overflow"<<endl;
    else
        ptr[++top]=data;
    
}

template<class P>
void Stack<P>::pop()
{
    if(top==-1)
        cout<<"\n Stack is underflow"<<endl;
    else
        cout<<"\n Popped Element: "<<ptr[top--]<<endl;
}

template<class P>
void Stack<P>::peek()
{
     if(top==-1)
        cout<<"\n Stack is underflow"<<endl;
     else
         cout<<"\n Peek Element: "<<ptr[top]<<endl;
}
 template  class Stack<int>;
 template class Stack<double>; 
