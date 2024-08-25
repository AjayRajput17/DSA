//Given an array, predict if the array contains duplicates or not.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bool flag=false;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                flag = true;
                break;
            }
        }
        if(flag==true) break;
    }

    if(flag==true)
        cout<<"Duplicate are present..";
    else
        cout<<"Unique element...";

   
}