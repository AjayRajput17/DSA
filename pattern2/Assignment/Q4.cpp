#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a rows:";
    cin>>n;
    int m =n-1;

    for(int i=1;i<=2*n-1;i++)
    {
        cout<<char(64+i);
    }
    cout<<endl;

    
    for(int i=1;i<=m;i++)
    {
        int a =1;

        for(int j=1;j<=m-i+1;j++)
        {
            cout<<char(64+a);
            a++;
        }

        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"#";
            a++;
        }

      for(int j=1;j<=m-i+1;j++)
        {
            cout<<char(64+a);
            a++;
        }
        cout<<endl;

    }

}