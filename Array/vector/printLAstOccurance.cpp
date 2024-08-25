// find the last occurrence of x in the array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;  // v-> 9 10 6 1
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(11);
    v.push_back(12);
    v.push_back(6);
    v.push_back(13);
    int x=6;
    int idx=-1;

          // forward traversing
    // for(int i=0;i<v.size();i++)
    // {
    //     if(v.at(i)==x)
    //     {
    //         idx=i;
    //     }

    // }
    // cout<<idx;

      // backword traversing

     for(int i=v.size()-1;i>=0;i--)
     {
        if(v.at(i)==x)
        {
            idx = i;
            break;
        }
     } 
     cout<<idx;

}