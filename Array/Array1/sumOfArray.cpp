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
    int sum=0;

     for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<endl<<sum;
}