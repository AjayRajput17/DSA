#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    // string  s = "ajay ingle";
    //  cout<<s.size()<<endl;

    //  cout<<s.length();

    // string str = "abcde";
    // cout<<str<<endl;

    // str.push_back('f');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str<<endl;
    
    // string str = "abcde";
    // cout<<str<<endl;
    // reverse(str.begin(),str.end());
    // cout<<str<<endl;
    
    string str = "abcde";
    cout<<str<<endl;
    // reverse(str.begin()+2,str.end());
    reverse(str.begin()+2,str.end()-1);
    cout<<str<<endl;
    


    
}