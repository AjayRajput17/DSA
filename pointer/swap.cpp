#include<iostream>
using namespace std;

// void swap(int a,int b)
// {
//     int temp= a;
//     a=b;
//     b=temp;
//     return;
// }

// void swap(int &a,int &b)
// {
//     int temp = a;
//     a =b;
//     b=temp;
// }

// int main()
// {
//  int a,b;
//  cin>>a>>b;
//  swap(a,b);
//  cout<<a<<" "<<b;


// }

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
 int a,b;
 cin>>a>>b;
 swap(&a,&b);
 cout<<a<<" "<<b;


}