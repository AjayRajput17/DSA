#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = sizeof(arr)/sizeof(int);
    cout<<size<<endl;
    cout<<&arr[0]<<" ";
    cout<<&arr;
    
}