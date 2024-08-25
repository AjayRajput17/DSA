// count the number of triplets whose sum is equal to gicen value x
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a array Size:";
    cin>>n;
    int arr[n];
    cout<<"Enter a array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int x;
    cout<<"enter a target x :";
    cin>>x;
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
            count++;
    }

    cout<<"NO of elements greater than x:"<<count;

}