#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a String ";
    getline(cin,str);
    sort(str.begin(),str.end());
    cout<<str;
}