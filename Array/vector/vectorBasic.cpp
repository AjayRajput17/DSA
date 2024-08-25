#include<iostream>
#include <vector>
using namespace std;


int main()
{
    // syntax of vector
    vector<int> v; 

    // no need to mention size
    // inserting / input do not use squre bracket []. but we can use square bracket to access elemnt.

    v.push_back(10);
    cout<<v.size()<<endl;
    cout<<"cap: "<<v.capacity()<<endl;

    v.push_back(20);
    cout<<v.size()<<endl;
    cout<<"cap: "<<v.capacity()<<endl;

    v.push_back(30);
    cout<<v.size()<<endl;
    cout<<"cap: "<<v.capacity()<<endl;

    v.push_back(40);
    cout<<v.size()<<endl;
    cout<<"cap: "<<v.capacity()<<endl;

    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

   
    
}