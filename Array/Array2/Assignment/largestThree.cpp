// WAP to find the largest three elements in the array
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

   int mx = INT8_MIN;
   int smx = INT8_MIN;
   int tmx = INT8_MIN;

//    for(int i=0;i<n;i++)
//    {
//     if(arr[i]>mx)
//         mx = arr[i];
//    }

//    for(int i=0;i<n;i++)
//    {
//     if(arr[i]>smx && arr[i]!=mx)
//         smx = arr[i];
//    }

//     for(int i=0;i<n;i++)
//    {
//     if(arr[i]>tmx && arr[i]!=mx && arr[i]!=smx)
//         tmx = arr[i];
//    }

for(int i=0;i<n;i++)
{
    if(arr[i]>mx)
    {
        tmx=smx;
        smx = mx;
        mx=arr[i];
        
    }

    if(arr[i]>smx && arr[i]!=mx)
    {
        smx = arr[i];
    }

    if(arr[i]>tmx && arr[i]!= mx && arr[i]!=smx)
    {
        tmx =arr[i];
    }
}

   cout<<"first largest: "<<mx<<endl;
   cout<<"second largest: "<<smx<<endl;
   cout<<"third largest: "<<tmx<<endl;


}