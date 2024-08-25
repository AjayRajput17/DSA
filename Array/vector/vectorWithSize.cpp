#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(5); // initial size and capacity is 5
    cout<<"size "<<v.size()<<endl;
    cout<<"capasity "<<v.capacity();

    vector<int> v1(5,7); // initial size and capacity is 5 and each elemnt initail vlaue is 7
    cout<<"size:"<<v1.size();
    cout<<"cap:"<<v1.capacity();
    cout<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
}