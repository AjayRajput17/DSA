#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of rows:";
    cin>>n;


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        
        for(int k=1;k<=i;k++)
        {
            cout<<char(k+64)<<" ";
        }
        cout<<endl;
    }
}

//     enter no of rows:4
//    A
//   A B
//  A B C
// A B C D
// }