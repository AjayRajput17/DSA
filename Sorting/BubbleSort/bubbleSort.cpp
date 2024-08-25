#include <iostream>
using namespace std;

int main()
{
    // int arr[6] = {5, 4, 6, 3, 2, 1};
    int arr[6] = {6,1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    

    cout<<"Array before Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    // sorting
    
    for (int i = 0; i < n - 1; i++)
    {
        bool flag =true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            { // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if(flag == true) // swap didn't happen
            break;

        
    }

     cout<<"\nArray after Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    cout<<"\n"<<C;
}