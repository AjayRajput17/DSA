#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<int> v1(5);
    // cout<<v1[0]<<" ";
    // cout<<v1[1]<<" ";
    // cout<<v1[2]<<" ";
    // cout<<v1[3]<<" ";
    // cout<<v1[4]<<" ";
    // cout<<endl;

    //  vector<int> v2(5,2); // initail values to the vector
    // cout<<v2[0]<<" ";
    // cout<<v2[1]<<" ";
    // cout<<v2[2]<<" ";
    // cout<<v2[3]<<" ";
    // cout<<v2[4]<<" ";
    // cout<<endl;
    //int arr[3][4];
    // now we want to create vector like above array then
    vector<vector<int>>v(3,vector<int>(4));
        // vector of 3 rows and 4 columns
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[0].size();j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    cout<<endl;
    vector<vector<int>>v4(3,vector<int>(4,2));
    // it will create vector of row 3 and column 4 with initial values of element in vector is 2

     for(int i=0;i<v4.size();i++)
        {
            for(int j=0;j<v4[0].size();j++)
            {
                cout<<v4[i][j]<<" ";
            }
            cout<<endl;
        }

}