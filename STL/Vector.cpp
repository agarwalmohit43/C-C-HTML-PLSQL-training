#include<iostream>
#include<vector>
using namespace std;

void main()
{
    vector<int> v(10);
    /*cout<<v.size()<<" "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(1);
   cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity()<<endl;*/

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    cout<<v[1]<<endl;//random access like array

    for(int i=0;i<v.size(); i++)
        cout<<v[i]<<"\t";//print value of array
    

    v.pop_back();//pop element from vector
    cout<<endl;

    for(int i=0;i<v.size(); i++)
        cout<<v[i]<<"\t";//print value of array

    cout<<endl;
    vector<int>::iterator itr;//iterator object for vector
    for(itr=v.begin();itr!=v.end();itr++)
        cout<<*itr<<"\t";
}