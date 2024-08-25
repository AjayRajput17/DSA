#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"size:";
    cin>>n;
    int arr[n];
    int product =1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    int min = INT8_MAX;

    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }


    }
    cout<<"minimum"<<min;
}