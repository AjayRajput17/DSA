// wap to reverswe the array without using the extra array

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

void reverse(vector<int> &v)
{
    int i=0;
    int j= v.size()-1;

    while (i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j]=temp;
        i++;
        j--;
    }

}
void reversePart(int i,int j,vector<int> &v)
{
    while(i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;j--;
    }
    return;
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
    display(v);

    // int i=0;
    // int j= v.size()-1;

    // while (i<=j)
    // {
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }

    // for(int i=0,j=v.size()-1;i<=j;i++,j--)
    // {
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j]=temp;
    // }

    reversePart(0,2,v);
    display(v);
    
    
}