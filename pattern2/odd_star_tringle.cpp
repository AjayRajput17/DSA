#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter no of rows:";
 cin>>n;
int a=1;
 for(int i =1;i<=n;i++)
 {
    // for(int j=1;j<=a;j++)
    // {
    //     cout<<"*";

    // }

    for(int j=1;j<=2*i-1;j++)
    {
        cout<<"*";
    }
    
    cout<<endl;
    a+=2;
 }
 

 }
