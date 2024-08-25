#include<iostream>
using namespace std;

int main()
{
    // int x=6;
    // int y=7;       // NO ERROR
    // int* p1=&x;
    // int* p2 = &y;

    //   int x=12,y=10;
    //   int* p1=&x, p2 = &y;  // error

    int x=10,y=12;
    int *p1=&x,*p2 = &y;
    cout<<*p1<<"  "<<*p2;



}