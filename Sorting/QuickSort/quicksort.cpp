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

void quicksort(int arr[], int si, int ei)
{
  if (si >= ei)
    return;
  // 5,1,8,2,7,6,3,4
  int pivoteIdx = partition(arr, si, ei);
  // 4,1,3,2,5,7,8,6

  quicksort(arr, si, pivoteIdx - 1);
  quicksort(arr, pivoteIdx + 1, ei);
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