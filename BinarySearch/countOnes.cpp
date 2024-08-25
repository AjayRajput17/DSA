#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,0,0,1,1,1,1,1};
    int n =8;
    int x=1;
    int low = 0;
    int high = 8;
    int res =0;
   
    while(low<=high){

        int mid = low+(high-low)/2;
        if(arr[mid] == x){
            if(arr[mid-1] == x){
                high = mid-1;
            }
            else{
                 res = mid;
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
    cout<<res<<endl;
    cout<<" no of ones is "<<n-res;


}