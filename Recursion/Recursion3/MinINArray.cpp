/// C Write a program to find the minimum e.ement of an array using recursionC

#include <iostream>
#include <climits>
using namespace std;

int calMin(int arr[], int n, int idx)
{

  if (idx == n)
    return INT_MAX;
  return min(arr[idx], calMin(arr, n, idx + 1));
}
int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 10, 0, -1, -50};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << calMin(arr, n, 0);
}
