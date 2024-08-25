// without extra space
#include<iostream>
using namespace std;
int main() {

    //int arr[] = {4, 2, 9, 7, 8};
    //int arr[] = {1, 3, 2, 4, 5};
    int arr[] = {4, 2, 3, 1, 5};


    int n = 5;
    bool flag = true;
    for (int i = 0; i < n - 2; i++)
    {

        if (arr[i] > arr[i + 1] && arr[i] > arr[i + 2])
        {
            flag = false;
            break;
        }
    }
    
    if (flag == true)
    {
        cout << "It is  almost sort";
    }
    else
    {
        cout << "It is not   almost sort";
    }
}