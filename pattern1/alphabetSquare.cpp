#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a rows:";
    cin>>n;

    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=65;j<=64+n;j++)
    //     {
    //         cout<<char(j);
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<char(j+64);
        }
        cout<<endl;
    }
   


    
}