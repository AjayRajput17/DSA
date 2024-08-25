#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
    {
        cout << "Array not sorted";
    }
    else
    {
        cout << "Array is sorted";
    }
}