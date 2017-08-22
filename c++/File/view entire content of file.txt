#include<iostream>
#include<fstream>
#include<String>
using namespace std;

void main()
{
    string name("Mohit");
    int roll=848785;
    int roll2;
    string name2;
    string mystr;
    ofstream writeobject("d:\\file\\data.txt",ios::out);
    if(writeobject.fail())
    {
        cout<<"File opening failed"<<endl;
    }else
    {
        cout<<"File opened"<<endl;
        writeobject<<roll<<"\t"<<name;
    }

    writeobject.close();
    ifstream readobject("d:\\file\\data1.txt");;
    //readobject.open("d:\\data.txt"); alternative way of opening file
    if(readobject.fail())
    {
       cout<<"File opening failed"<<endl;
    }else
    {
        while(readobject>>mystr)
        {
            cout<<mystr;
        }
        readobject.close();

    }
    
    
}