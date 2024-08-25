#include<iostream>
#include <vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
    string str = " Ajay is a math teacher. He is a DSA mentor math as well";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int maxCount = 1;
    int count = 1;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 1;
        }
    }

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if(count == maxCount)
        {
            cout<<v[i]<<":"<<maxCount<<endl;
        }
        
    }
    
}