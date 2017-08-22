#include<iostream>
using namespace std;
namespace mohit
{
    void display()
    {
        cout<<"Mohit Display function"<<endl;
    }
}

namespace ilu
{
    void display()
    {
        cout<<"Ilu Display function"<<endl;
    }
}
using namespace ilu;
//using namespace mohit;//one namespace at a time can be used
void main()
{
    display();
    mohit:: display();
}