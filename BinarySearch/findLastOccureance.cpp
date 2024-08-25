#include<iostream>
using namespace std;
int main()
{
    int arr[13] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int x=10;
    int low = 0;
    int high = 12;

    int flag=false;
    while(low<=high){

        int mid = low + (high-low)/2;

        if(arr[mid] == x){
            if(mid == n-1){
                cout<<"Last Occurance is: "<<mid;
                flag = true;
                break;
            }
            else  if(arr[mid+1] ==x){
                low = mid+1;
            }
            else{
                cout<<"Last Occurance is: "<<mid;
                flag = true;
                break;
            }
        }
        else if(arr[mid] < x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    } 
     if(flag == false){
        cout<<"Element not Found" <<-1;
     }

    }
