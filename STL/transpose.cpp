#include<iostream>    
#include<vector>    
using namespace std;    
int main()    
{    
    int row,col,number,temp;
    cout<<"\nEnter the row and colums: ";
    cin>>row>>col;

    vector<vector<int>> v(row);

    for(int i=0;i<row;i++)
    {
        v[i].resize(col);
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"\nEnter the "<<i+1<<j+1<<" elements: ";
            cin>>v[i][j];

        }
    }
    //printing
    cout<<"\nBefore transpose:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            //cout<<"\nEnter the "<<i+1<<j+1<<" elements: ";
            cout<<v[i][j]<<" ";

        }
        cout<<endl;
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<i;j++)
        {
            temp=v[i][j];
            v[i][j]=v[j][i];
            v[j][i]=temp;

        }
    }

    cout<<"\nAfter transpose:"<<endl;
      for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            //cout<<"\nEnter the "<<i+1<<j+1<<" elements: ";
            cout<<v[i][j]<<" ";

        }
        cout<<endl;
    }
      system("pause");
  return 0;    
}    
