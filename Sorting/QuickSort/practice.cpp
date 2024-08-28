#include <iostream>
using namespace std;
int partition(int arr[], int si, int ei)
{
  int pivot = arr[si];
  int count = 0;
  for (int i = si + 1; i <= ei; i++)
  {
    if (arr[i] <= pivot)
    {
      count++;
    }
  }

  int pivoteIdx = count + si;
  swap(arr[si], arr[pivoteIdx]);
  int i = si;
  int j = ei;

  while (i < pivoteIdx && j > pivoteIdx)
  {
    if (arr[i] <= arr[pivoteIdx])
      i++;

    if (arr[j] > arr[pivoteIdx])
      j--;
    else if (arr[i] > arr[pivoteIdx] && arr[j] <= arr[pivoteIdx])
    {
      swap(arr[i], arr[j]);
    }
  }
  return pivoteIdx;
}
void quicksort(int arr[], int si, int ei)
{
  if (si >= ei)
    return;

  int pivotIdx = partition(arr, si, ei);

  quicksort(arr, si, pivotIdx - 1);
  quicksort(arr, pivotIdx + 1, ei);
}
int main()
{
  int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  quicksort(arr, 0, n - 1);
  cout << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}