#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int* p=&x;
    x=10;
    cout<<x<<endl;
    *p = 15;
    cout<<x<<endl;
    cout<<*p;
}