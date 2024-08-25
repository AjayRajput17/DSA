#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a rows:";
    cin>>n;
    int m=n-1;
    
    for(int i=1;i<=2*n-1;i++)
    {
        int a=i;
        if(a>n) 
        {
            a = 2*n-i;
            cout<<a;
        } 
        else
          cout<<i;   
    }
    cout<<endl;

    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n-i;j++)
       {
           cout<<j;
       }

       for(int j=1;j<=2*i-1;j++)
       {
          cout<<" ";
       }

       for(int j=n-i;j>=1;j--)
       {
        cout<<j;
       }
       cout<<endl;
    }

}
