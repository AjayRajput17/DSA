#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter the no of rows:";
    cin>>m;

    int n;
    cout<<"enter a no of column ";
    cin>>n;

    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<" Original array"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // store the transpose
    int brr[n][m];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            brr[i][j] = arr[j][i];
        }
    }

    cout<<endl;

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}    