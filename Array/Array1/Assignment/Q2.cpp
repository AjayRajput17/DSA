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
    int mx=INT8_MIN;
    int smx = INT8_MIN;

    for(int i=0;i<n;i++)
    {
        if(mx<arr[i])
        {
            smx=mx;
            mx = arr[i];
        }
        else{
            if(smx<arr[i])
            {
                smx = arr[i];
            }
        }
    }
    cout<<"largest:"<<mx<<endl;
    cout<<"second largest:"<<smx;
}
