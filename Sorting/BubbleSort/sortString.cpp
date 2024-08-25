#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string s = "AZYZXBDXJK";
    string str;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] >= 'X' ){
            str.push_back(s[i]);
        }
    }
    // cout<<str<<endl;
    // sort(str.begin(),str.end());
    // cout<<str;

    // sort using bubble sort
    cout<<str<<endl;
    int n = str.length();
    for(int i=0;i<n-1;i++){
        bool flag = true;

        for(int j=0;j<n-1-i;j++){
            if(str[j] > str[j+1]){
                int temp = str[j];
                str[j] = str[j+1];
                str[j+1]= temp;

                flag =false;
            }
        }

        if(flag == true)
            break;
    }

    cout<<"\n"<<str;
}