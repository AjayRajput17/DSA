// Find the unique number in a array where all element are being repeated twice with one value being unique

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
        bool flag = true; // true meanas unique
        for(int j=0;j<n;j++)
        {
             // true meanas unique
            if(j==i)continue;

            if(arr[i]==arr[j]){  // not unique
                flag = false;
                break;
            }

        }
        if(flag==true)
        {
            cout<<"Unique number is: "<<arr[i];
            break;
        }
    }

} 