#include<iostream>
#include <vector>
#include<sstream>
using namespace std;
int main()
{
    string str = "Ajay is a good cooder";
    stringstream ss(str);
    string temp;
    while(ss>>temp)
    {
        cout<<temp<<endl;
    }
    
}