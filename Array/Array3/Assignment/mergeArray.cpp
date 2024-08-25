#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>a = {1,3,5,7};
    vector<int>b = {2,4,6,8,9};
    vector<int> c;

    int n = a.size();
    int m = b.size();
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(a[i] < b[j])
        {
            c.push_back(a[i]);
            i++;
        }
        else
        {
            c.push_back(b[j]);
            j++;
        }
    }

    while(j<m)
    {
        c.push_back(b[j]);
        j++;
    }
    
    while(i<n)
    {
        c.push_back(a[i]);
        i++;
    }
    int k = c.size();
    for(int i=0; i<k;i++)
    {
        cout<<c[i]<<" ";
    }

}