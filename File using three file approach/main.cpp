#include"header.h"

void main()
{
    Fileoperation fileobj;
    Student s(848785,"Mohit",55.6);
    fileobj.writetofile(s);
    Student s1(848783,"Animesh",95.6);
    fileobj.writetofile(s1);
    fileobj.readfromfile();
    cout<<endl;
    
}