#include<iostream>
using namespace std;
int main()
{
    int arr[13] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int x=4;
    int low = 0;
    int high = 12;

    while(low<=high){

        int mid = low+(high-low)/2;
        if(arr[mid] == x){
            if(arr[mid-1] == x){
                high = mid-1;
            }
            else{
                 cout<<"First Occurence  index of "<<x<<":"<<mid;
                 break;
            }
        }
        else if(arr[mid]< x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
}