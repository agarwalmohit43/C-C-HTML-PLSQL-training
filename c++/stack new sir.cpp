#include<iostream>
using namespace std;

template<class T>
class Stack
{
public:Stack(int);
       void push(T);
       T pop();
       T peek();
       bool isFull();
       bool isEmpty();

private:T *ptr;
        int top,size;
};

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

void main()
{
     Stack<int> s(3);
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"Peek Element: "<<s.peek()<<endl;
    cout<<"Poped Element: "<<s.pop()<<endl;
    
    cout<<"Peek Element: "<<s.peek()<<endl;
    cout<<"Poped Element: "<<s.pop()<<endl;
    
    cout<<"Peek Element: "<<s.peek()<<endl;
    cout<<"Poped Element: "<<s.pop()<<endl;
    
    cout<<"Peek Element: "<<s.peek()<<endl;
    cout<<"Poped Element: "<<s.pop()<<endl;

}