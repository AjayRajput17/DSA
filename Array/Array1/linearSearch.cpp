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
    int no;
    cout<<"enter a no which you want to search:";
    cin>>no;
    // checkmark
    bool flag= false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==no)
        {
            flag=true;
        }
        

    }
    if(flag)
        cout<<"present"<<endl;
    else
        cout<<"absent"<<endl;
 }


   
