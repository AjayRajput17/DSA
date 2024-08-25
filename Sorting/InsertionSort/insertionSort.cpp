#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 30, 1, -4, 2};
    int n = 5;

    for (int el : arr)
    {
        cout << el << " ";
    }

    for (int i = 1; i < n; i++)
    {
        int j = i;

        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    cout << endl;
    for (int el : arr)
    {
        cout << el << " ";
    }
}

// while(j>=1)
// {
//     if(arr[j] >= arr[j-1])
//         break;
//     else if(arr[j] < arr[j-1])
//     {
//         swap(arr[j], arr[j-1]);
//     }

//     j--;
// }