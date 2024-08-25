// WAP to find differance between the sum of elemnet at even indices to the sum of element at odd indices

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
    int evenSum=0;
    int oddSum =0;
    int diff = 0;
    for(int i=0;i<n;i++)
    {
        if(i%2 == 0)
            evenSum+=arr[i];
        else
            oddSum+=arr[i];    
    }

    
   diff = evenSum-oddSum;
    
    cout<<"differance is:"<<diff<<endl;    

} 