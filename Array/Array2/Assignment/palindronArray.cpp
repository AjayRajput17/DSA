// if an array arr contain n element the check if the given arrray is apalidron or not

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
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            flag = false;
            break;
        }
        
    }
    if(flag==true)
        cout<<"palindrome";
    else    
        cout<<"it not palindrome";    

}   