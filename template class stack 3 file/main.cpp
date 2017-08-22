#include "header.h"


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
