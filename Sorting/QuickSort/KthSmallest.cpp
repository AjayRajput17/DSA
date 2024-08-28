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

    if (arr[i] <= pivot)
      i++;

    if (arr[j] > pivot)
      j--;
    else if (arr[i] > pivot && arr[j] <= pivot)
    {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  }
  return pivotIdx;
}

int kthSmallest(int arr[], int si, int ei, int k)
{

  int pivoteIdx = partition(arr, si, ei);

  if (pivoteIdx + 1 == k)
    return arr[pivoteIdx];
  else if (pivoteIdx + 1 < k)
    return kthSmallest(arr, pivoteIdx + 1, ei, k);
  else
    return kthSmallest(arr, si, pivoteIdx - 1, k);
}

int main()
{
  int arr[] = {5, 1, 8, 2, 7, 6, 3, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  int k = 8;
  cout << endl;
  cout << kthSmallest(arr, 0, n - 1, k);
}