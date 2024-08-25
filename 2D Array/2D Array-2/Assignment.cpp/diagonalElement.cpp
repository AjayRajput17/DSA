#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"enter a no of rows:";
    cin>>m;

    int n;
    cout<<"Enter no of column:";
    cin>>n;

    int a[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || i+j == n-1)
            {
                cout<<a[i][j]<<" ";
            }
            else
                cout<<" "<<" ";
        }
        cout<<endl;
    }
}