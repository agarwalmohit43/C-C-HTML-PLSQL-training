#include<iostream>
#include<string>
using namespace std;
void main()
{
    string s="Mohit Kumar";
    string s2="Agarwal";
    string s3,s4,s5;
    int found;
    s3=s+" "+s2; 
    s4=s3;
    if(s4==s3)//equality
        //cout<<"Same"<<endl;
    char a=s[2];//indexing
    //s3[0]=s2[0];//repalcing using indexing
    //s3.swap(s);//swapping
    //cout<<s<<endl;//swapped s3 to s1
    //cout<<a<<endl;
   // cout<<s3;//swapped s1 to s3
   // s.insert(1,"insert");//use to insert at given position
    //s.erase(1,3);//use to remove characters from string i.e M***t(ohi->removed)
    //s5=s.substr(1,3);//substring ->ohi
    found=s.find("z");//returns the first occurence of the alphabet return -1 if not found
    cout<<found<<endl;

}