#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {5,3,1,4,2};
    int n=5;

    
    for(int i=0;i<n-1;i++)
    {
        int min = INT8_MAX;
        int min_idx=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j] < min)
            {
                min = arr[j];
                min_idx = j;
            }
        }

        swap(arr[i],arr[min_idx]);

    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}