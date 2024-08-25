#include<iostream>
using namespace std;

int max(int n,int arr[])
{
    
}
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
    int max = INT8_MIN;
    int min = INT8_MAX;
    
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }

    cout<<"maximum value is: "<<max<<endl;
    cout<<"Minimum value is: "<<min<<endl;

    

 }


   
