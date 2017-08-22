#include<iostream>
#include<string>
using namespace std;

string reversestr(string &s)
{
    int n=s.length();
    for(int i=0;i<n/2;i++)
    {    swap(s[i],s[n-1-i]);
    }
    return s;
}

void main()
{
    string n;
    cout<<"\n Enter the string: ";
    //cin.ignore(10,'\n');
    //getline(cin,n);
    cin>>n;
    string s=reversestr(n);
    cout<<s;
}