//  Write a program to find the index of a given e.ement in an array using recursion. If the
// element is present, return its index; otherwise, return -1

#include <iostream>
#include <climits>
using namespace std;

// int findIndex(int arr[], int n, int idx, int target)
// {
//   if (idx == n)
//     return -1;
//   if (arr[idx] == target)
//     return idx;
//   findIndex(arr, n, idx + 1, target);
// }

int binarySearch(int arr[], int left, int right, int target)
{

  if (left > right)
    return -1;

  int mid = left + (right - left) / 2;

  if (arr[mid] == target)
    return mid;

  if (arr[mid] > target)
    return binarySearch(arr, left, mid - 1, target);
  return binarySearch(arr, mid + 1, right, target);
}
int main()
{

  int arr[] = {1, 2, 3, 5, 7, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 9;
  // cout << findIndex(arr, n, 0, target);
  cout << binarySearch(arr, 0, n - 1, target);
}
