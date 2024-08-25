#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no of rows:";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }


        
        for(int j=1;j<=2*n-a;j++)
        {
            if(j==1 || j==2*n-a)
                cout<<"*";
            else    
                cout<<" ";

               
        }
        a+=2; 
        cout<<endl;
    }
}