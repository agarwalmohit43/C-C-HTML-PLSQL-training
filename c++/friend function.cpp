#include<iostream>
using namespace std;
class complex
{
public:
    void display()
    {
         cout<<"\t"<<real<<"\t"<<imaginary<<endl;
    }
    void initialise()//for initialising real and imaginary values to zero
    {
        this->real=0;
        this->imaginary=0;
    }

    complex()//empty constructor
    {
        /*cout<<"\n Empty constructor"<<endl;
        cout<<"Enter the real value: "<<endl;
        cin>>real;
        cout<<"Enter the imaginary value: "<<endl;
        cin>>imaginary;*/
        real=1;
        imaginary=1.5;
    }

    complex(int real,float imaginary)
    {
        cout<<"\n Parametrized constructor"<<endl;
        this->real=real;
        this->imaginary=imaginary;
    }

   /* void operator=(complex &c1)
    {
        cout<<"\n operator= constructor"<<endl;
        real=c1.real;
        imaginary=c1.imaginary;
    }*/

    complex& operator=(complex &c1)
    {
        cout<<"\n operator= with complex return type constructor"<<endl;
        real=c1.real;
        imaginary=c1.imaginary;
        return *this;
    }

    friend complex operator +(complex &c,complex &d)
    {
        cout<<"\n operator+ constructor"<<endl;
        complex comp;
        comp.real=c.real+d.real;
        comp.imaginary=c.imaginary+d.imaginary;
        return comp;
    }

    complex operator +(int x)//overloading overloaded + c.operator= c.operator+(x)
    {
        cout<<"\n overloading overloaded + constructor"<<endl;
        complex comp;
        comp.real=real+x;
        comp.imaginary=imaginary;
        return comp;
    }

    //overlaoding + for operator(5,c1)

    friend complex operator +(int x,complex &c)
    {
        cout<<"\n overlaoding + for operator(x,c1)"<<endl;
        complex comp;
        comp.real=c.real+x;
        comp.imaginary=c.imaginary;
        return comp;
    }

    //overloading cout object in ostream class
    friend ostream& operator <<(ostream &o,complex &c)
    {
        o<<"\t"<<c.real<<"\t"<<c.imaginary<<endl;
        return o;
    }

    //overloading cin object in istream class
     friend istream& operator >>(istream &i,complex &c)
    {
        cout<<"Enter the real value: "<<endl;
        i>>c.real;
        cout<<"Enter the imaginary value: "<<endl;
        i>>c.imaginary;
        return i;
    }

    bool operator ==(complex &c)
    {
        if(real==c.real && imaginary==c.imaginary)
            return true;
        else
            return false;
    }

    friend void operator -(complex &c)
    {
        c.real=-c.real;
        c.imaginary=-c.imaginary;
    }

    complex operator++(int)//post increment needs int to return the value to other temp
    {
        complex t;
        t.real=real;
        t.imaginary=imaginary;
         real+=1;
        imaginary+=1;
        return t;
    }
     complex operator++()//pre increment  does not needs int because value itself gets incremented
    {
        
        real+=1;
        imaginary+=1;
        return *this;
    }
    ~complex()
    {
        cout<<"\n Destructor called"<<endl;
    }
private:
    int real;
    float imaginary;
};
void main()
{   
    complex c1;
    // c1.display();
    cout<<c1;//operator<<(cout,c1)
    //complex c2(2,2);
    //complex c3;
    //complex c4;
    //complex c5;
    //complex c6;
    //complex c7;
   // complex c8;
    //complex c9;
     complex c10;
   // c1.initialise();
    //c3=c1;//operator= overload
    //c4=c1+c3;//operator+ overload using friend class new
    //c1.display();
    //c2.display();
    //c3.display();
    //c4.display();
    //cout<<c4;
    /*if(c1==c3)
    {
        cout<<"\n Both are Same"<<endl;
    }else
    {
        cout<<"\n Unequal"<<endl;
    }*/
    //-c1;
    //c1.display();
    //c6=c5=c1;//cascading operators return type complex 
    //c7=c1+5;
    //c7.display();
    //c8=5+c1;//overlaoding + for operator(5,c1)
    //c8.display();
   // cout<<c8;//operator<<(cout,c8)
    //cout<<c8<<c1;//operator<<(operator<<(cout,c8),c1)
   // cin>>c9;//operator<<(cin,c9)
   // cout<<c9;
     ++c10;//pre increment
     cout<<"Pre: "<<c10;
     c10++;//post increment
     cout<<"Post: "<<c10;
     
     cout<<endl;
}

/*friend function in binary case 2 parameter and for unary 1 parameter*/