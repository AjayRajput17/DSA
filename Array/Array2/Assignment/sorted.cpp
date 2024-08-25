// check if the array is sorted or not

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

    bool flag = true;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            flag = false;
            break;
        }
        
    }

    if(flag==true)
        cout<<"sorted..";
    else
        cout<<"unsorted..";    

}   