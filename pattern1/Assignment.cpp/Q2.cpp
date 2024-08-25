#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of rows:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

// output:-
// enter no of rows:4
// 1234
// 123
// 12
// 1