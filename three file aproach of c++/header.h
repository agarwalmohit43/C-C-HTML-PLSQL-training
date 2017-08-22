#include<iostream>
using namespace std;
class Demo
{
public:Demo(int);
       ~Demo();
       void print();
       friend void show();
private:int foo;
};