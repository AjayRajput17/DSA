
// Count the number of triplet whose sum is equal to the given value x

#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>arr;
    for(int i=0;i<n;i++)
    {
         int no;
        cout<<"Enter value for array: ";
        cin>>no;
        arr.push_back(no);
        

    }
    cout<<"Enter value for x ";
    int x;
    cin>>x;
    int count =0;

    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k] == x)
                {
                    count++;
                }
            }
        }
    }

    cout<<"Number of triplet sum is equal to x is : "<<count;
}