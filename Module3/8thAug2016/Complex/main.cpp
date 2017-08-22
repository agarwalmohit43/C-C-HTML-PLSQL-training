#include<iostream>
using namespace std;
class Complex
{
public:Complex(int r,float i):real(r),imag(i)
	   {
		 cout<<"\nparameterised constructor";
	   }
	   Complex(){
		   cout<<"\nempty constructor";
		   real=0;imag=0.0;
	   }
	   void display(){
		cout<<"\nreal = "<<real<<"\timag = "<<imag;
	   }
	   ~Complex(){
		   cout<<"\ndestructor called";
	   }
	   Complex(Complex &c1)//copy constructor
	   {
		   cout<<"\ncopy constructor called";
		   real=c1.real;
		   imag=c1.imag;
	   }
	   void operator=(Complex &c)//overloading = opt
	   {
		   cout<<"\n overaloaded = operator";
		   real=c.real;
		   imag=c.imag;
	   }
		  Complex operator+(Complex &c)//+ overloading
	   {
		   cout<<"\noverloaded + operator";
		   Complex comp;
		   comp.real=c.real+real;
		   comp.imag=c.imag+imag;
		   return comp;
	   }
		  bool operator==(Complex c)
		  {
			  cout<<"\noverloaded == operator";
			  if(real==c.real && imag==c.imag)
				  return true;
			  else
				return false;
		  }
		  void operator-()
		  {
			  cout<<"\noverloaded unary - operator";
			  imag=-imag;
			  real=-real;
		  }
private:int real;float imag;
};
void main()
{
	Complex c1(10,20.1);
	//Complex c2(c1);
	Complex c2=c1;//calles copy constrctor
	//c1.display();
	//c2.display();
	Complex c3;
	c3=c1+c2;//calles overloaded + operator->c1.operator=(c2)
	c3.display();
	if(c1==c2)//c1.operator==(c2)
	{
		cout<<"\n both are same";
	}
	else
	{
		cout<<"\n both are not same";
	}
	-c1;//c1.operator-()
	c1.display();
}