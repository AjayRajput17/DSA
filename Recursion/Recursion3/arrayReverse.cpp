// print a.. the e.ements of an array in reverse order using recursionC

#include <iostream>
#include <climits>
using namespace std;

void reverse(int arr[], int idx)
{
  if (idx < 0)
    return;
  cout << arr[idx] << " ";
  reverse(arr, idx - 1);
}

int main()
{

  int arr[] = {1, 2, 3, 5, 7, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  reverse(arr, n - 1);
}
