#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter asize of array:";
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int max= INT8_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<"Max is:"<<max<<endl;

    int Smax = INT8_MIN;
    for(int i=0;i<n;i++)
    {
        if(Smax<arr[i] && arr[i]!=max)
        {Smax = arr[i];}
    }
    cout<<"Smax is:"<<Smax;
}