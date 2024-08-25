#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"size:";
    cin>>n;
    int arr[n];
    int product =1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        product*=arr[i];
    }

    // for(int i=0;i<n;i++)
    // {
    //     product*=arr[i];

    // }

    cout<<"product is:"<<product;
}