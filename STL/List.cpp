#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
void main()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_front(30);//insert at begining
    l1.push_back(1);
    l1.push_back(8);//insert from end
    l1.push_front(15);

    list<int>::iterator it;

    it=l1.begin();
    it++;
    it++;
    l1.insert(it,100);//insert in middle use it with iterator
    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    
    l1.sort();
    cout<<endl;
    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";

    list<int>::iterator itrMin=min_element(l1.begin(),l1.end());//using algorithm preprocessor
    cout<<"\nMinimum Element in List: "<<*itrMin<<endl;
    cout<<"Index of minimum element in list: "<<distance(l1.begin(),itrMin)<<endl;

    list<int>::iterator itrMax=max_element(l1.begin(),l1.end());//using algorithm preprocessor
    cout<<"\nMaximum Element in List: "<<*itrMax<<endl;
    cout<<"Index of maximum element in list: "<<distance(l1.begin(),itrMax)<<endl;

    list<int>::iterator itrFind=find(l1.begin(),l1.end(),15);//using algorithm preprocessor
    cout<<"\nElement found in List: "<<*itrFind<<endl;
    cout<<"Index of found element in list: "<<distance(l1.begin(),itrFind)<<endl;
    cout<<endl;
}