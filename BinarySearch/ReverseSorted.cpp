// Write a program to apply binary search in array sorted in decreasing order.

#include <iostream>
using namespace std;

int main()
{
  int arr[] = {80, 70, 60, 50, 40, 30, 20, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int low = 0;
  int high = n - 1;
  bool flag = false;
  int x = 40;
  int mid = -1;
  while (low <= high)
  {

    mid = low + (high - low) / 2;

    if (arr[mid] == x)
    {
      flag = true;
      break;
    }
    else if (arr[mid] < x)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  if (flag == true)
  {
    cout << "Element is present at " << mid;
  }
  else
  {
    cout << "Element is not present";
  }
}