#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of rows:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}

// output:- 
// enter no of rows:4
// 1111
// 2222
// 3333
// 4444