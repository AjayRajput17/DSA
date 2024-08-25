#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //vector<int> v(5);

    // for(int i=0;i<5;i++)
    // {
    //     cin>>v[i];
    // }
                                // input like a array with declaring size of vector
    // for(int i=0;i<5;i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;


 // Without declaring Size of vector
 vector<int> v;
  for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


}