 
#include<iostream>    
#include<vector>    
using namespace std;    
int main()    
{    
 int row,col,number;    
 cout<<"Enter number of rows and columns : "<<endl;    
 cin>>row>>col;    
    
 vector<vector<int>> matrix;    
    
 cout<<"Enter the Elements : "<<endl;    
     
 for(int i=0;i<row;i++)    
 {    
  vector<int> myvector;    
  for(int j=0;j<col;j++)    
  {     
      cout<<"\nEnter the "<<i+1<<j+1<<" elements: ";
     cin>>number;    
     myvector.push_back(number);    
        
  }    
  matrix.push_back(myvector);    
 }    
    
 cout<<"Entered Elements are : - "<<endl;    
    
 for(int i=0;i<row;i++)    
 {    
  for(int j=0;j<col;j++)    
  {     
   cout<<matrix[i][j]<<" ";     
  }    
  cout<<endl;    
 }    
    
 cout<<"Tranpose of the matrix : -"<<endl;    
 for(int i=0;i<col;i++)    
 {    
  for(int j=0;j<row;j++)    
  {     
   cout<<matrix[j][i]<<" ";     
  }    
  cout<<endl;    
 }    
  return 0;    
}    
