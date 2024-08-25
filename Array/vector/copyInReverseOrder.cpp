#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}
int main()
{
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

    vector<int> v2(v.size());
    
    // i+j = size-1
    for(int i=0;i<v2.size();i++)
    {
        int j = v.size()-1-i;
        v2.at(i)= v.at(j);
    }

    display(v);
    display(v2);
}