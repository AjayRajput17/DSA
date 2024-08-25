#include <iostream>
using namespace std;
int main()
{
    // int arr[] = {4,2,7,9,8}; // not almost sorted
    // int n =5;
    // bool flag=true;
    // for(int i=0;i<n;i++)
    // {
    //     int count=0;

    //     for(int j=0;j<n;j++)
    //     {
    //         if(i==j)
    //             continue;

    //         if(arr[j]> arr[i])
    //             count++;
    //     }

    //     int aidx = n-count-1;
    //     int curr = i;
    //     int exp = aidx-curr;
    //     if(abs(exp)>1){
    //         flag = false;
    //         break;

    //     }

    //     if(flag==false)
    //         break;

    // }
    // if(flag==true)
    // {
    //     cout<<"it is almost sorted";
    // }
    // else{
    //     cout<<"this is not almost sorted";
    // }

    // m-2

    int arr[] = {4, 2, 7, 9, 8}; // not almost sorted
    int n = 5;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            if (arr[j] > arr[i])
                count++;
        }

        int aidx = n - count - 1;

        if (aidx == 0)
        {
            if (arr[i] != arr[aidx] && arr[i] != arr[aidx + 1])
            {
                flag = false;
                break;
            }
        }
        else if (aidx == n - 1)
        {
            if (arr[i] != arr[aidx] && arr[i] != arr[aidx - 1])
            {
                flag = false;
                break;
            }
        }
        else
        {
            if (arr[i] != arr[aidx] && arr[i] != arr[aidx - 1] && arr[i] != arr[aidx + 1])
            {
                flag = false;
                break;
            }
        }

    }
    
        if(flag==true)
        {
            cout<<"It is almost sort";
        }
        else{
            cout<<"it is not almost sort";
        }
}