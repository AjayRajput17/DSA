#include <iostream>
using namespace std;

int partition(int arr[], int si, int ei)
{
  int mid = (si + ei) / 2;
  int pivot = arr[mid];
  int count = 0;

  for (int i = si; i <= ei; i++)
  {
    if (i == mid)
      continue;
    if (arr[i] <= pivot)
      count++;
  }

  int pivotIdx = count + si;
  swap(arr[mid], arr[pivotIdx]);

  int i = si;
  int j = ei;

  while (i < pivotIdx && j > pivotIdx)
  {
    while (arr[i] <= pivot)
    {
      i++;
    }

    while (arr[j] > pivot)
    {
      j--;
    }

    if (i < pivotIdx && j > pivotIdx)
    {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  }

  return pivotIdx;
}

int kthLargest(int arr[], int si, int ei, int k, int n)
{
  int kthSmallestIdx = n - k; // kth largest is equivalent to (n-k)th smallest

  int pivotIdx = partition(arr, si, ei);

  if (pivotIdx == kthSmallestIdx)
  {
    return arr[pivotIdx];
  }
  else if (pivotIdx < kthSmallestIdx)
  {
    return kthLargest(arr, pivotIdx + 1, ei, k, n);
  }
  else
  {
    return kthLargest(arr, si, pivotIdx - 1, k, n);
  }
}

int main()
{
  int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Original array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  int k = 1;
  int kthLargestElement = kthLargest(arr, 0, n - 1, k, n);
  cout << k << "rd largest element is: " << kthLargestElement << endl;

  return 0;
}
