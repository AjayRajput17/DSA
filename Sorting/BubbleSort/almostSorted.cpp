#include <iostream>
using namespace std;
int main()
{
    // int arr[] = {7,1,8,3,4,5,6};
    // int n = 7;

    // for(int i=0;i<n-1;i++){
    //     if(arr[i] > arr[i+1]){
    //         swap(arr[i],arr[i+1]);
    //     }
    // }
    // bool flag=true;
    // for(int i=0;i<n-1;i++){
    //     if(arr[i] > arr[i+1]){
    //         flag=false;
    //         break;
    //     }
    // }

    // if(flag==true)
    //     cout<<"Array is almost sorted";
    // else
    //     cout<<"Array is not almost sorted";

    //element are at-most one position away
    // with extra space
    int arr[] = {4,2,7,9,8};
     int n = 5;
     int brr[n];
     for(int i=0;i<n;i++)
     {
         brr[i] = arr[i];
     }

     for(int i=0;i<n-1;i++)
     {
         bool flag=true;
         for(int j=0;j<n-1-i;j++)
         {
             if(arr[j] > arr[j+1])
             {
                 swap(arr[j],arr[j+1]);
                 flag=false;
             }
         }
         if(flag==true)
             break;
     }

     bool f = true;
     for(int i=0;i<n;i++)
     {
         if(i==0)
         {
             if(brr[i] !=arr[i] && brr[i] != arr[i+1]){
                  f=false;
                  break;
             }

         }
         else if(i==n-1){
              if(brr[i] !=arr[i] && brr[i] != arr[i-1]){
                  f=false;
                  break;
             }
         }
         else{
             if(brr[i] !=arr[i] && brr[i] != arr[i-1] && brr[i] !=arr[i+1]){
                  f=false;
                  break;
             }
         }
     }
     cout<<endl;
     if(f==false)
     {
         cout<<"It is not almost sort";
     }
     else{
         cout<<"It is  almost sort";
     } 

    