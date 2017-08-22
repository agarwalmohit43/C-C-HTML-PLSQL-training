#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a,int b)//return true/false on basis of value compared in return ex a<b a:10 b:2 return 10<2:false
{
    return a<b;//asscending order a>b->descending order
}
void main()
{
    vector<int> v;
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

    v.push_back(10);
    v.push_back(2);
    v.push_back(30);
    v.push_back(1);
    
    cout<<v[1]<<endl;//random access like array

    for(int i=0;i<v.size(); i++)
        cout<<v[i]<<"\t";//print value of array
    

    //v.pop_back();//pop element from vector
    cout<<endl;

    for(int i=0;i<v.size(); i++)
        cout<<v[i]<<"\t";//print value of array

    cout<<endl;
    vector<int>::iterator itr;//iterator object for vector
    for(itr=v.begin();itr!=v.end();itr++)
        cout<<*itr<<"\t";

    cout<<endl;

    sort(v.begin(),v.end(),&compare);//sorting algorithm 1:beign,2:end,3:true/false
    for(itr=v.begin();itr!=v.end();itr++)
        cout<<*itr<<"\t";
    cout<<endl;
}