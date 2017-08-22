#include<iostream>
using namespace std;

template<class P>
class Stack
{
public:void push(P);
       void pop();
       void peek();
       Stack(int);
       Stack(Stack<P>&);
       ~Stack();

private:P *ptr;
        int top,size;
};

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

void main()
{
    Stack<int> s(3);
    s.push(1);
    s.push(2);
    s.push(3);
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    //double
    Stack<double> s1(3);
    s1.push(1.5);
    s1.push(2.5);
    s1.push(3.5);
    s1.peek();
    s1.pop();
    s1.pop();
    s1.pop();
    cout<<endl;
}

/*
template class for whole class datatypes
*/