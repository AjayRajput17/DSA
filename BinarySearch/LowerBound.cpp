#include<iostream>
using namespace std;
int main()
{
    int arr[9] = {1,2,4,5,9,15,18,21,24};
    int n=9;
    int lb=0,hb = n-1;
    int target =7;

    int low =0;
    int high = n-1;

    while(low<=high){
        int mid = low + (high-low)/2;

        if(arr[mid] == target){
            lb = arr[mid-1];
            hb = arr[mid+1];
            break;
        }
        else if(arr[mid] < target){
            low = mid+1;
            lb = arr[mid];
        }
        else{
            high = mid-1;
            hb = arr[mid];
        }
    }

    cout<<"Lower Bound : "<<lb<<" Higher Bound : "<<hb;



}