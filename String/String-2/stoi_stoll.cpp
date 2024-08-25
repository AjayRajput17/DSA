#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "123456";
    int x = stoi(str);
    cout<<x;
    cout<<endl;
    // long number
    string str2 = "123456789123";
    long long y = stoll(str2);
    cout<<y;
}