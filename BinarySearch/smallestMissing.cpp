#include<iostream>
using namespace std;
int main(){
 int arr[13] = {0,1,2,3,5,8,9,12};
    int x=4;
    int low = 0;
    int high = 12;
    int loMissing=-1;

    while(low<=high){

        int mid = low+(high-low)/2;
        if(arr[mid] == mid){
            low = mid+1;
        }else {
        loMissing = mid; 
           high = mid-1;
        }
        
    }

    cout<<"Smallest missing : "<<loMissing;
 
}