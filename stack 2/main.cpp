#include "StackFunction.cpp"
#include "Complex.h"

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
    

    Stack<Complex> s2(5);
    Complex c1,c2,c3;
    c1.Accept();
    c2.Accept();
    c3.Accept();
    s2.push(c1);
    s2.push(c2);
    s2.push(c3);
    s2.pop().Display();
    s2.pop().Display();
    s2.pop().Display();
}