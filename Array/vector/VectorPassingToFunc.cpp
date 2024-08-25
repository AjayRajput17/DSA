#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//void change(vector<int> a) // pass by value
void change(vector<int> &a) // pass by referance
{
    a.at(0)=100; //a-> 100 10 6 1

    for(int i=0;i<a.size();i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;  // v-> 9 10 6 1
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);

    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    change(v);

    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}