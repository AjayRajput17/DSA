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
    int x=1;
    bool flag =false;

    for(int i=0;i<n;i++)
    {
      if(arr[i]<=0) continue;

      if(x!=arr[i])
      {
        flag=true;
        cout<<"missing element is:"<<x<<endl;
        break;
      }
      else{
        x++;
      }

      if(flag==true) break;
    }

    if(flag ==false)
    {
        cout<<"No value missing";
    }
    
    // bool flag =false;
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]!=i+1)
    //     {
    //         flag=true;
    //         cout<<"missing element is:"<<i+1;
    //         break;
            
    //     }
    // }
    // if(flag==false)
    // {
    //     cout<<"their is no missing element..";
    // }
    
    

    
}