/*Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
two numbers formed from digits of the array. Please note that all digits of the given array must be
used to form the two numbers.*/

#include<iostream>
using namespace std;
int main()
{
    // int arr[] = {9,7,5,4,6,3,1,2,0,8};

    // for(int j=0;j<2;j++)
    // {
    //     int min = INT8_MAX;
    //     int min_idx = -1;

    //     for(int i=j;i<10;i++)
    //     {
    //         if(arr[i] < min)
    //         {
    //             min = arr[i];
    //             min_idx = i;
    //         }
    //     }
    //     swap(arr[j],arr[min_idx]);
    // }

    // int sum = arr[0]+arr[1];
    // cout<<"Minimum sum of Array is:"<<sum;

    int arr[] = {5,1,5,5,2,3};
    int n = 6;

    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }

    // isertion sort

    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>=1 && arr[j] < arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    // sorted array
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }

  cout<<endl;
    // strong the sorted array into integer
    int m=0;
    for(int i=0;i<n;i++)
    {
        m *=10;
        m +=arr[i];
    }

    cout<<"First Minimum :"<<m<<endl;

    // for second minimum  we need to change sorted array

    for(int i=n-1;i>=0;i--)
    {
        if(arr[i] != arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }

    int p=0;
    for(int i=0;i<n;i++)
    {
        p *=10;
        p+=arr[i];
    }

    cout<<"second Minimum :"<<p<<endl;

    cout<<"Sum of first two minimum element is "<<m+p<<endl;
}