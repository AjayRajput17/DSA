// Given an array of integer change the value of all odd indexed element to its second multiple and increament all even indexes value by 10

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a array Size:";
    cin>>n;
    int arr[n];
    cout<<"Enter a array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i] = arr[i]+10;
        }
        else{
            arr[i] = arr[i]*2;
        }

        cout<<arr[i]<<" ";
    }

} 