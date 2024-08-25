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
    int count=0;
    int x;
    cout<<"enter x";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
            count++;
        
    }
    cout<<count;


    

 }


   
