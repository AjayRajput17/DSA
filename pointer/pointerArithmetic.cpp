#include<iostream>
using namespace std;

int main()
{
    // int x=5;
    // x++;
    // cout<<x;

    int x=5;
    int *ptr = &x;
    cout<<ptr<<endl;
    ptr = ptr+1;
    cout<<ptr;
}