#include<iostream>
using namespace std;
class Sstring
{
public:Sstring(char *name){
			len=strlen(name);
			str=new char[len+1];
			strcpy(str,name);
	   }
	   Sstring(){}
	   Sstring(Sstring &s)
	   {
		   cout<<"\ncopy constructor";
		   len=s.len;
		   str=new char[len+1];
		   strcpy(str,s.str);

	   }
	   void display(){cout<<"\nstr = "<<str;}
	   ~Sstring(){
			delete []str;
	   }
	void operator=(Sstring &s)
	{
		cout<<"\noverloaded = operator";
		len=s.len;
		str=new char[len+1];
		strcpy(str,s.str);
	}
private:int len;
		char *str;
};
void main()
{
	Sstring s1("ram");
	Sstring s2;
	s2=s1;//s2.operator=(s1)
	s1.display();
}