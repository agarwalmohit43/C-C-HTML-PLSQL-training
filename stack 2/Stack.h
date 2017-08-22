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