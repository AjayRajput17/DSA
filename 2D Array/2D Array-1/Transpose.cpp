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

    int brr[n][m];
    cout<<"Transpose array "<<endl;
    
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            cout<<arr[i][j]<<" ";
            brr[j][i] = arr[i][j];
        }
        cout<<endl;
    }

     for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            cout<<brr[j][i]<<" ";
            
        }
        cout<<endl;
    }

}    