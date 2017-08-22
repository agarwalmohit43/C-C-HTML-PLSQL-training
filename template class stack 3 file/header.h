#include<iostream>
using namespace std;

template<class P>
class Stack
{
public:Stack(int);
       Stack(Stack<P>&);
       void push(P);
       void pop();
       void peek();
       ~Stack();

private:P *ptr;
        int top,size;
};
/*template  class Stack<int>;
template class Stack<double>;*/ 