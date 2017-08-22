#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<iterator>
#include<fstream>
using namespace std;

void main()
{
    int i;
    vector<int> v;
    for(i=1;i<=5;i++)
        v.push_back(i*10);

    //list<int> l(5);//if we donot specify size then we need to use back_inserter i.e define in iterator api
   // copy(v.begin(),v.end(),l.begin());//copy content from vector to list
   
    list<int> l;
    copy(v.begin(),v.end(),back_inserter(l));
    list<int>::iterator itr=l.begin();
    for(;itr!=l.end();itr++)
        cout<<*itr<<" ";

    cout<<"\nostream_iterator: ";
    copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));//Output of vector to console using ostream_iterator

    vector<int> v1;
    cout<<"\nInsert Number: "<<endl;
    copy(istream_iterator<int>(cin),istream_iterator<int>(),back_inserter(v1));//insert from console to vector direct method
    copy(v1.begin(),v1.end(),ostream_iterator<int>(cout," "));//ctrl+D to stop
    cout<<endl;


    //From file
    cout<<"From File: ";
    vector<int> vfile;
    ifstream fin("d:\\file\\abc.txt");
    copy(istream_iterator<int>(fin),istream_iterator<int>(),back_inserter(vfile));
    copy(vfile.begin(),vfile.end(),ostream_iterator<int>(cout," "));
    cout<<endl;
}