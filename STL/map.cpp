#include<iostream>
#include<map>
using namespace std;

void main()
{
    map<int,char*> m;
    m.insert(pair<int,char*>(1,"MOhit"));
    m.insert(pair<int,char*>(2,"ILU"));
    m.insert(pair<int,char*>(2,"AMIT"));//in case of insert value with same key get discarded
    m.insert(pair<int,char*>(3,"Prasad"));
    m.insert(pair<int,char*>(4,"Chor"));
    m.insert(pair<int,char*>(5,"Aurat"));

   
    m[50]="Kiss";
    m[50]="Whore";//incase of this initialisation second replaces first

    map<int,char*>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }

    cout<<endl;
    //Multi map

    multimap<int,char*> m1;
    m1.insert(pair<int,char*>(1,"MOhit"));
    m1.insert(pair<int,char*>(2,"ILU"));
    m1.insert(pair<int,char*>(2,"AMIT"));
    m1.insert(pair<int,char*>(3,"Prasad"));
    m1.insert(pair<int,char*>(4,"Chor"));
    m1.insert(pair<int,char*>(5,"Aurat"));

    multimap<int,char*>::iterator itrs;
    for(itrs=m1.begin();itrs!=m1.end();itrs++)
    {
        //cout<<(*itrs).first<<" "<<(*itrs).second<<endl;
        cout<<itrs->first<<" "<<itrs->second<<endl;
    }
    cout<<endl;
}