/*Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
and display the sorted array.*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    // char str[6] = {'d','e','f','a','b','c'};
    // int n=6;
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=0;j<n-1-i;j++)
    //     {
    //         if(str[j] > str[j+1])
    //         {
    //             swap(str[j],str[j+1]);
    //         }
    //     }
    // }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<" "<<str[i];
    // }

    string arr[5] = {"raghav", "ajay", "harsh", "mahesh", "gaurav"};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        bool flag=true;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true)
            break;
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}