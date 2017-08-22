#include<iostream>
#include<stack>
#include<vector>
#include<queue>
#include<list>
using namespace std;

void main()
{
    stack<int,vector<int>> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;

    cout<<"\nQueue"<<endl;
    queue<int,list<int>> q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    cout<<endl;
}