#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"Enter a target value: ";
    int x;
    cin>>x;

    cout<<"enter a size of array: ";
    int n;
    cin>>n;

    vector<int> v;
    cout<<"Enter a element of array: ";

    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);
    }

    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]+v[j] == x)
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}